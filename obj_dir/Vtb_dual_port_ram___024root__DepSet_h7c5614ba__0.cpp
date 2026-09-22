// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dual_port_ram.h for the primary calling header

#include "verilated.h"

#include "Vtb_dual_port_ram__Syms.h"
#include "Vtb_dual_port_ram___024root.h"

VlCoroutine Vtb_dual_port_ram___024root___eval_initial__TOP__0(Vtb_dual_port_ram___024root* vlSelf);
VlCoroutine Vtb_dual_port_ram___024root___eval_initial__TOP__1(Vtb_dual_port_ram___024root* vlSelf);
VlCoroutine Vtb_dual_port_ram___024root___eval_initial__TOP__2(Vtb_dual_port_ram___024root* vlSelf);

void Vtb_dual_port_ram___024root___eval_initial(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_dual_port_ram___024root___eval_initial__TOP__0(vlSelf);
    Vtb_dual_port_ram___024root___eval_initial__TOP__1(vlSelf);
    Vtb_dual_port_ram___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_a__0 
        = vlSelf->tb_dual_port_ram__DOT__clk_a;
    vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_b__0 
        = vlSelf->tb_dual_port_ram__DOT__clk_b;
}

VL_INLINE_OPT VlCoroutine Vtb_dual_port_ram___024root___eval_initial__TOP__1(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1b58ULL, 
                                           nullptr, 
                                           "tb_dual_port_ram.v", 
                                           35);
        vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__clk_b__v0 
            = (1U & (~ (IData)(vlSelf->tb_dual_port_ram__DOT__clk_b)));
        vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__clk_b__v0 = 1U;
    }
}

VL_INLINE_OPT VlCoroutine Vtb_dual_port_ram___024root___eval_initial__TOP__2(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_dual_port_ram.v", 
                                           34);
        vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__clk_a__v0 
            = (1U & (~ (IData)(vlSelf->tb_dual_port_ram__DOT__clk_a)));
        vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__clk_a__v0 = 1U;
    }
}

VL_INLINE_OPT void Vtb_dual_port_ram___024root___act_sequent__TOP__0(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_dual_port_ram__DOT__collision = ((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_a) 
                                                & ((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_b) 
                                                   & ((IData)(vlSelf->tb_dual_port_ram__DOT__address_a) 
                                                      == (IData)(vlSelf->tb_dual_port_ram__DOT__address_b))));
}

void Vtb_dual_port_ram___024root___eval_act(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_dual_port_ram___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_dual_port_ram___024root___nba_sequent__TOP__0(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v0 = 0U;
    vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v1 = 0U;
}

VL_INLINE_OPT void Vtb_dual_port_ram___024root___nba_sequent__TOP__1(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__clk_b__v0) {
        vlSelf->tb_dual_port_ram__DOT__clk_b = vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__clk_b__v0;
        vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__clk_b__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__clk_a__v0) {
        vlSelf->tb_dual_port_ram__DOT__clk_a = vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__clk_a__v0;
        vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__clk_a__v0 = 0U;
    }
    vlSelf->tb_dual_port_ram__DOT__collision = ((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_a) 
                                                & ((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_b) 
                                                   & ((IData)(vlSelf->tb_dual_port_ram__DOT__address_a) 
                                                      == (IData)(vlSelf->tb_dual_port_ram__DOT__address_b))));
}

VL_INLINE_OPT void Vtb_dual_port_ram___024root___nba_sequent__TOP__2(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_b) 
         & (~ ((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_a) 
               & ((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_b) 
                  & ((IData)(vlSelf->tb_dual_port_ram__DOT__address_a) 
                     == (IData)(vlSelf->tb_dual_port_ram__DOT__address_b))))))) {
        vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__uut__DOT__memory__v1 
            = vlSelf->tb_dual_port_ram__DOT__data_in_b;
        vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__tb_dual_port_ram__DOT__uut__DOT__memory__v1 
            = vlSelf->tb_dual_port_ram__DOT__address_b;
    }
    vlSelf->tb_dual_port_ram__DOT__data_out_b = ((IData)(vlSelf->tb_dual_port_ram__DOT__output_enable_b)
                                                  ? 
                                                 vlSelf->tb_dual_port_ram__DOT__uut__DOT__memory
                                                 [vlSelf->tb_dual_port_ram__DOT__address_b]
                                                  : 0U);
}

VL_INLINE_OPT void Vtb_dual_port_ram___024root___nba_sequent__TOP__3(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->tb_dual_port_ram__DOT__write_enable_a) {
        vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__uut__DOT__memory__v0 
            = vlSelf->tb_dual_port_ram__DOT__data_in_a;
        vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__tb_dual_port_ram__DOT__uut__DOT__memory__v0 
            = vlSelf->tb_dual_port_ram__DOT__address_a;
    }
    vlSelf->tb_dual_port_ram__DOT__data_out_a = ((IData)(vlSelf->tb_dual_port_ram__DOT__output_enable_a)
                                                  ? 
                                                 vlSelf->tb_dual_port_ram__DOT__uut__DOT__memory
                                                 [vlSelf->tb_dual_port_ram__DOT__address_a]
                                                  : 0U);
}

VL_INLINE_OPT void Vtb_dual_port_ram___024root___nba_sequent__TOP__4(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v0) {
        vlSelf->tb_dual_port_ram__DOT__uut__DOT__memory[vlSelf->__Vdlyvdim0__tb_dual_port_ram__DOT__uut__DOT__memory__v0] 
            = vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__uut__DOT__memory__v0;
    }
    if (vlSelf->__Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v1) {
        vlSelf->tb_dual_port_ram__DOT__uut__DOT__memory[vlSelf->__Vdlyvdim0__tb_dual_port_ram__DOT__uut__DOT__memory__v1] 
            = vlSelf->__Vdlyvval__tb_dual_port_ram__DOT__uut__DOT__memory__v1;
    }
}

void Vtb_dual_port_ram___024root___eval_nba(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dual_port_ram___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dual_port_ram___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dual_port_ram___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dual_port_ram___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_dual_port_ram___024root___nba_sequent__TOP__4(vlSelf);
    }
}

void Vtb_dual_port_ram___024root___eval_triggers__act(Vtb_dual_port_ram___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dual_port_ram___024root___dump_triggers__act(Vtb_dual_port_ram___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_dual_port_ram___024root___timing_resume(Vtb_dual_port_ram___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dual_port_ram___024root___dump_triggers__nba(Vtb_dual_port_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dual_port_ram___024root___eval(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval\n"); );
    // Init
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_dual_port_ram___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_dual_port_ram___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_dual_port_ram.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_dual_port_ram___024root___timing_resume(vlSelf);
                Vtb_dual_port_ram___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_dual_port_ram___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_dual_port_ram.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_dual_port_ram___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_dual_port_ram___024root___timing_resume(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_dual_port_ram___024root___eval_debug_assertions(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
