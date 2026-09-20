`timescale 1ns / 1ps

module dual_port_ram #(
    parameter ADDR_WIDTH = 8,
    parameter DATA_WIDTH = 8,
    parameter DEPTH      = 256
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

    // Proper 2D memory declaration
    reg [DATA_WIDTH-1:0] memory [0:DEPTH-1];

    // Combinational collision detection
    assign collision = write_enable_a & write_enable_b &
                       (address_a == address_b);

    // Port A — clk_a domain
    always @(posedge clk_a) begin
        if (write_enable_a)
            memory[address_a] <= data_in_a;

        if (output_enable_a)
            data_out_a <= memory[address_a];
        else
            data_out_a <= {DATA_WIDTH{1'b0}};
    end

    // Port B — clk_b domain
    // Port A wins on collision; Port B write is suppressed
    always @(posedge clk_b) begin
        if (write_enable_b && !collision)
            memory[address_b] <= data_in_b;

        if (output_enable_b)
            data_out_b <= memory[address_b];
        else
            data_out_b <= {DATA_WIDTH{1'b0}};
    end

endmodule
