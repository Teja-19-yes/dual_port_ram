// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_dual_port_ram__Syms.h"


void Vtb_dual_port_ram___024root__trace_chg_sub_0(Vtb_dual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_dual_port_ram___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_dual_port_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dual_port_ram___024root*>(voidSelf);
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_dual_port_ram___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_dual_port_ram___024root__trace_chg_sub_0(Vtb_dual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_dual_port_ram__DOT__write_enable_a));
        bufp->chgBit(oldp+1,(vlSelf->tb_dual_port_ram__DOT__write_enable_b));
        bufp->chgBit(oldp+2,(vlSelf->tb_dual_port_ram__DOT__output_enable_a));
        bufp->chgBit(oldp+3,(vlSelf->tb_dual_port_ram__DOT__output_enable_b));
        bufp->chgCData(oldp+4,(vlSelf->tb_dual_port_ram__DOT__address_a),8);
        bufp->chgCData(oldp+5,(vlSelf->tb_dual_port_ram__DOT__address_b),8);
        bufp->chgCData(oldp+6,(vlSelf->tb_dual_port_ram__DOT__data_in_a),8);
        bufp->chgCData(oldp+7,(vlSelf->tb_dual_port_ram__DOT__data_in_b),8);
        bufp->chgBit(oldp+8,(((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_a) 
                              & ((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_b) 
                                 & ((IData)(vlSelf->tb_dual_port_ram__DOT__address_a) 
                                    == (IData)(vlSelf->tb_dual_port_ram__DOT__address_b))))));
        bufp->chgIData(oldp+9,(vlSelf->tb_dual_port_ram__DOT__pass_count),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_dual_port_ram__DOT__fail_count),32);
    }
    bufp->chgBit(oldp+11,(vlSelf->tb_dual_port_ram__DOT__clk_a));
    bufp->chgBit(oldp+12,(vlSelf->tb_dual_port_ram__DOT__clk_b));
    bufp->chgCData(oldp+13,(vlSelf->tb_dual_port_ram__DOT__data_out_a),8);
    bufp->chgCData(oldp+14,(vlSelf->tb_dual_port_ram__DOT__data_out_b),8);
}

void Vtb_dual_port_ram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root__trace_cleanup\n"); );
    // Init
    Vtb_dual_port_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dual_port_ram___024root*>(voidSelf);
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
