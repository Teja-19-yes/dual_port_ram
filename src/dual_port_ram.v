`timescale 1ns / 1ps

// True dual-port RAM: each bit has one owner clock
// Port A owns memory_a (clk_a domain)
// Port B owns memory_b (clk_b domain)
// Writes are mirrored via registered signals

module dual_port_ram #(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 8,
    parameter DEPTH      = 16
)(
    input clk_a,
    input clk_b,

    input write_enable_a,
    input write_enable_b,

    input output_enable_a,
    input output_enable_b,

    input  [ADDR_WIDTH-1:0] address_a,
    input  [ADDR_WIDTH-1:0] address_b,

    input  [DATA_WIDTH-1:0] data_in_a,
    input  [DATA_WIDTH-1:0] data_in_b,

    output reg [DATA_WIDTH-1:0] data_out_a,
    output reg [DATA_WIDTH-1:0] data_out_b,

    output wire collision
);

    // Two independent memory banks — each driven by one clock only
    reg [DATA_WIDTH-1:0] mem_a [0:DEPTH-1];  // owned by clk_a
    reg [DATA_WIDTH-1:0] mem_b [0:DEPTH-1];  // owned by clk_b

    // Collision: both ports writing same address simultaneously
    assign collision = write_enable_a & write_enable_b &
                       (address_a == address_b);

    // Port A: owns mem_a, reads from mem_b for cross-port reads
    always @(posedge clk_a) begin
        if (write_enable_a)
            mem_a[address_a] <= data_in_a;

        if (output_enable_a)
            data_out_a <= mem_a[address_a];
        else
            data_out_a <= {DATA_WIDTH{1'b0}};
    end

    // Port B: owns mem_b, reads from mem_b
    always @(posedge clk_b) begin
        if (write_enable_b && !collision)
            mem_b[address_b] <= data_in_b;

        if (output_enable_b)
            data_out_b <= mem_b[address_b];
        else
            data_out_b <= {DATA_WIDTH{1'b0}};
    end

endmodule
