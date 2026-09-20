// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dual_port_ram.h for the primary calling header

#include "verilated.h"

#include "Vtb_dual_port_ram__Syms.h"
#include "Vtb_dual_port_ram___024root.h"

VL_ATTR_COLD void Vtb_dual_port_ram___024root___eval_static__TOP(Vtb_dual_port_ram___024root* vlSelf);

VL_ATTR_COLD void Vtb_dual_port_ram___024root___eval_static(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_static\n"); );
    // Body
    Vtb_dual_port_ram___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_dual_port_ram___024root___eval_static__TOP(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_dual_port_ram__DOT__clk_a = 0U;
    vlSelf->tb_dual_port_ram__DOT__clk_b = 0U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    vlSelf->tb_dual_port_ram__DOT__address_a = 0U;
    vlSelf->tb_dual_port_ram__DOT__address_b = 0U;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = 0U;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = 0U;
    vlSelf->tb_dual_port_ram__DOT__pass_count = 0U;
    vlSelf->tb_dual_port_ram__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_dual_port_ram___024root___eval_final(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_dual_port_ram___024root___eval_triggers__stl(Vtb_dual_port_ram___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dual_port_ram___024root___dump_triggers__stl(Vtb_dual_port_ram___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_dual_port_ram___024root___eval_stl(Vtb_dual_port_ram___024root* vlSelf);

VL_ATTR_COLD void Vtb_dual_port_ram___024root___eval_settle(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_dual_port_ram___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_dual_port_ram___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_dual_port_ram.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_dual_port_ram___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dual_port_ram___024root___dump_triggers__stl(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_dual_port_ram___024root___act_sequent__TOP__0(Vtb_dual_port_ram___024root* vlSelf);

VL_ATTR_COLD void Vtb_dual_port_ram___024root___eval_stl(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_dual_port_ram___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dual_port_ram___024root___dump_triggers__act(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_dual_port_ram.clk_a)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_dual_port_ram.clk_b)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_dual_port_ram.clk_a or posedge tb_dual_port_ram.clk_b)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dual_port_ram___024root___dump_triggers__nba(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_dual_port_ram.clk_a)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_dual_port_ram.clk_b)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_dual_port_ram.clk_a or posedge tb_dual_port_ram.clk_b)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dual_port_ram___024root___ctor_var_reset(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_dual_port_ram__DOT__clk_a = VL_RAND_RESET_I(1);
    vlSelf->tb_dual_port_ram__DOT__clk_b = VL_RAND_RESET_I(1);
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = VL_RAND_RESET_I(1);
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = VL_RAND_RESET_I(1);
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = VL_RAND_RESET_I(1);
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = VL_RAND_RESET_I(1);
    vlSelf->tb_dual_port_ram__DOT__address_a = VL_RAND_RESET_I(8);
    vlSelf->tb_dual_port_ram__DOT__address_b = VL_RAND_RESET_I(8);
    vlSelf->tb_dual_port_ram__DOT__data_in_a = VL_RAND_RESET_I(8);
    vlSelf->tb_dual_port_ram__DOT__data_in_b = VL_RAND_RESET_I(8);
    vlSelf->tb_dual_port_ram__DOT__data_out_a = VL_RAND_RESET_I(8);
    vlSelf->tb_dual_port_ram__DOT__data_out_b = VL_RAND_RESET_I(8);
    vlSelf->tb_dual_port_ram__DOT__collision = VL_RAND_RESET_I(1);
    vlSelf->tb_dual_port_ram__DOT__pass_count = VL_RAND_RESET_I(32);
    vlSelf->tb_dual_port_ram__DOT__fail_count = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_dual_port_ram__DOT__uut__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__clk_b__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__clk_b__v0 = 0;
    vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__clk_a__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__clk_a__v0 = 0;
    vlSelf->__Vdlyvdim0__tb_dual_port_ram__DOT__uut__DOT__memory__v0 = 0;
    vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__uut__DOT__memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v0 = 0;
    vlSelf->__Vdlyvdim0__tb_dual_port_ram__DOT__uut__DOT__memory__v1 = 0;
    vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__uut__DOT__memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_a__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_b__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
