`timescale 1ns / 1ps

module tb_dual_port_ram;

    reg        clk_a = 0, clk_b = 0;
    reg        write_enable_a = 0, write_enable_b = 0;
    reg        output_enable_a = 0, output_enable_b = 0;
    reg  [7:0] address_a = 0, address_b = 0;
    reg  [7:0] data_in_a = 0, data_in_b = 0;
    wire [7:0] data_out_a, data_out_b;
    wire       collision;

    dual_port_ram #(
        .ADDR_WIDTH(8),
        .DATA_WIDTH(8),
        .DEPTH(256)
    ) uut (
        .clk_a          (clk_a),
        .clk_b          (clk_b),
        .write_enable_a (write_enable_a),
        .write_enable_b (write_enable_b),
        .output_enable_a(output_enable_a),
        .output_enable_b(output_enable_b),
        .address_a      (address_a),
        .address_b      (address_b),
        .data_in_a      (data_in_a),
        .data_in_b      (data_in_b),
        .data_out_a     (data_out_a),
        .data_out_b     (data_out_b),
        .collision      (collision)
    );

    // Fixed: use <= for clock toggles to suppress BLKSEQ warning
    always #5  clk_a <= ~clk_a;
    always #7  clk_b <= ~clk_b;

    // ----------------------------------------------------------------
    // Scoreboard
    // ----------------------------------------------------------------
    integer pass_count = 0;
    integer fail_count = 0;

    task check;
        input [7:0] expected;
        input [7:0] actual;
        input [7:0] addr;
        input       port;
        begin
            if (actual === expected) begin
                $display("  PASS | Port %s | addr=%0d | got=0x%02h",
                         port ? "B" : "A", addr, actual);
                pass_count = pass_count + 1;
            end else begin
                $display("  FAIL | Port %s | addr=%0d | expected=0x%02h got=0x%02h",
                         port ? "B" : "A", addr, expected, actual);
                fail_count = fail_count + 1;
            end
        end
    endtask

    // ----------------------------------------------------------------
    // Tasks
    // ----------------------------------------------------------------
    task write_a(input [7:0] addr, input [7:0] data);
        begin
            address_a      = addr;
            data_in_a      = data;
            write_enable_a = 1;
            #10;
            write_enable_a = 0;
            #10;
        end
    endtask

    task write_b(input [7:0] addr, input [7:0] data);
        begin
            address_b      = addr;
            data_in_b      = data;
            write_enable_b = 1;
            #14;
            write_enable_b = 0;
            #14;
        end
    endtask

    task read_a(input [7:0] addr, input [7:0] expected);
        begin
            address_a       = addr;
            output_enable_a = 1;
            #10;
            check(expected, data_out_a, addr, 0);
            output_enable_a = 0;
            #10;
        end
    endtask

    task read_b(input [7:0] addr, input [7:0] expected);
        begin
            address_b       = addr;
            output_enable_b = 1;
            #14;
            check(expected, data_out_b, addr, 1);
            output_enable_b = 0;
            #14;
        end
    endtask

    // ----------------------------------------------------------------
    // Stimulus
    // ----------------------------------------------------------------
    initial begin
        $dumpfile("dual_port_ram.vcd");
        $dumpvars(0, tb_dual_port_ram);

        $display("\n========================================");
        $display("  Dual-Port RAM Testbench");
        $display("========================================\n");

        // TEST 1: Basic Port A write/read
        $display("--- TEST 1: Port A write/read ---");
        write_a(8'd0,  8'hAA);
        write_a(8'd1,  8'hBB);
        write_a(8'd2,  8'hCC);
        write_a(8'd3,  8'hDD);
        read_a(8'd0,   8'hAA);
        read_a(8'd1,   8'hBB);
        read_a(8'd2,   8'hCC);
        read_a(8'd3,   8'hDD);

        // TEST 2: Basic Port B write/read
        $display("\n--- TEST 2: Port B write/read ---");
        write_b(8'd10, 8'h11);
        write_b(8'd11, 8'h22);
        write_b(8'd12, 8'h33);
        write_b(8'd13, 8'h44);
        read_b(8'd10,  8'h11);
        read_b(8'd11,  8'h22);
        read_b(8'd12,  8'h33);
        read_b(8'd13,  8'h44);

        // TEST 3: Cross-port reads
        $display("\n--- TEST 3: Cross-port reads ---");
        write_a(8'd20, 8'hAB);
        write_b(8'd21, 8'hCD);
        read_b(8'd20,  8'hAB);
        read_a(8'd21,  8'hCD);

        // TEST 4: output_enable = 0 forces data_out to 0
        $display("\n--- TEST 4: OE=0 forces output to 0 ---");
        write_a(8'd30, 8'hFF);
        #20;
        address_a       = 8'd30;
        output_enable_a = 0;
        #10;
        if (data_out_a === 8'h00) begin
            $display("  PASS | Port A OE=0 | data_out_a=0x%02h", data_out_a);
            pass_count = pass_count + 1;
        end else begin
            $display("  FAIL | Port A OE=0 | expected=0x00 got=0x%02h", data_out_a);
            fail_count = fail_count + 1;
        end

        write_b(8'd31, 8'hFF);
        #20;
        address_b       = 8'd31;
        output_enable_b = 0;
        #14;
        if (data_out_b === 8'h00) begin
            $display("  PASS | Port B OE=0 | data_out_b=0x%02h", data_out_b);
            pass_count = pass_count + 1;
        end else begin
            $display("  FAIL | Port B OE=0 | expected=0x00 got=0x%02h", data_out_b);
            fail_count = fail_count + 1;
        end

        // TEST 5: Collision — Port A wins
        $display("\n--- TEST 5: Collision (Port A wins) ---");
        write_b(8'd50, 8'h00);
        #20;
        address_a      = 8'd50; data_in_a = 8'hAA; write_enable_a = 1;
        address_b      = 8'd50; data_in_b = 8'hBB; write_enable_b = 1;
        #5;
        if (collision === 1'b1) begin
            $display("  PASS | collision flag asserted");
            pass_count = pass_count + 1;
        end else begin
            $display("  FAIL | collision flag not asserted");
            fail_count = fail_count + 1;
        end
        #5;
        write_enable_a = 0; write_enable_b = 0;
        #20;
        read_a(8'd50, 8'hAA);

        // TEST 6: No collision — different addresses
        $display("\n--- TEST 6: No collision (different addresses) ---");
        address_a      = 8'd60; data_in_a = 8'h5A; write_enable_a = 1;
        address_b      = 8'd61; data_in_b = 8'h6B; write_enable_b = 1;
        #5;
        if (collision === 1'b0) begin
            $display("  PASS | no spurious collision");
            pass_count = pass_count + 1;
        end else begin
            $display("  FAIL | spurious collision flagged");
            fail_count = fail_count + 1;
        end
        #5;
        write_enable_a = 0; write_enable_b = 0;
        #20;
        read_a(8'd60, 8'h5A);
        read_b(8'd61, 8'h6B);

        // TEST 7: Boundary addresses
        $display("\n--- TEST 7: Boundary addresses ---");
        write_a(8'h00, 8'hDE);
        write_b(8'hFF, 8'hAD);
        read_a(8'h00,  8'hDE);
        read_b(8'hFF,  8'hAD);

        // TEST 8: Overwrite same address
        $display("\n--- TEST 8: Overwrite ---");
        write_a(8'd70, 8'h01);
        write_a(8'd70, 8'h02);
        read_a(8'd70,  8'h02);
        write_b(8'd71, 8'hF0);
        write_b(8'd71, 8'hF1);
        read_b(8'd71,  8'hF1);

        // Summary
        #50;
        $display("\n========================================");
        $display("  Results: %0d PASSED | %0d FAILED",
                 pass_count, fail_count);
        $display("========================================\n");
        if (fail_count == 0)
            $display("  ALL TESTS PASSED\n");
        else
            $display("  SOME TESTS FAILED\n");

        $finish;
    end

endmodule
