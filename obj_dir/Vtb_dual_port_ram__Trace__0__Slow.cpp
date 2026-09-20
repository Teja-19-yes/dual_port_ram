// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_dual_port_ram__Syms.h"


VL_ATTR_COLD void Vtb_dual_port_ram___024root__trace_init_sub__TOP__0(Vtb_dual_port_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_dual_port_ram ");
    tracep->declBit(c+12,"clk_a", false,-1);
    tracep->declBit(c+13,"clk_b", false,-1);
    tracep->declBit(c+1,"write_enable_a", false,-1);
    tracep->declBit(c+2,"write_enable_b", false,-1);
    tracep->declBit(c+3,"output_enable_a", false,-1);
    tracep->declBit(c+4,"output_enable_b", false,-1);
    tracep->declBus(c+5,"address_a", false,-1, 7,0);
    tracep->declBus(c+6,"address_b", false,-1, 7,0);
    tracep->declBus(c+7,"data_in_a", false,-1, 7,0);
    tracep->declBus(c+8,"data_in_b", false,-1, 7,0);
    tracep->declBus(c+14,"data_out_a", false,-1, 7,0);
    tracep->declBus(c+15,"data_out_b", false,-1, 7,0);
    tracep->declBit(c+9,"collision", false,-1);
    tracep->declBus(c+10,"pass_count", false,-1, 31,0);
    tracep->declBus(c+11,"fail_count", false,-1, 31,0);
    tracep->pushNamePrefix("uut ");
    tracep->declBus(c+16,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+12,"clk_a", false,-1);
    tracep->declBit(c+13,"clk_b", false,-1);
    tracep->declBit(c+1,"write_enable_a", false,-1);
    tracep->declBit(c+2,"write_enable_b", false,-1);
    tracep->declBit(c+3,"output_enable_a", false,-1);
    tracep->declBit(c+4,"output_enable_b", false,-1);
    tracep->declBus(c+5,"address_a", false,-1, 7,0);
    tracep->declBus(c+6,"address_b", false,-1, 7,0);
    tracep->declBus(c+7,"data_in_a", false,-1, 7,0);
    tracep->declBus(c+8,"data_in_b", false,-1, 7,0);
    tracep->declBus(c+14,"data_out_a", false,-1, 7,0);
    tracep->declBus(c+15,"data_out_b", false,-1, 7,0);
    tracep->declBit(c+9,"collision", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_dual_port_ram___024root__trace_init_top(Vtb_dual_port_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root__trace_init_top\n"); );
    // Body
    Vtb_dual_port_ram___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_dual_port_ram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_dual_port_ram___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_dual_port_ram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_dual_port_ram___024root__trace_register(Vtb_dual_port_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_dual_port_ram___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_dual_port_ram___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_dual_port_ram___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_dual_port_ram___024root__trace_full_sub_0(Vtb_dual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_dual_port_ram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root__trace_full_top_0\n"); );
    // Init
    Vtb_dual_port_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_dual_port_ram___024root*>(voidSelf);
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_dual_port_ram___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_dual_port_ram___024root__trace_full_sub_0(Vtb_dual_port_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_dual_port_ram__DOT__write_enable_a));
    bufp->fullBit(oldp+2,(vlSelf->tb_dual_port_ram__DOT__write_enable_b));
    bufp->fullBit(oldp+3,(vlSelf->tb_dual_port_ram__DOT__output_enable_a));
    bufp->fullBit(oldp+4,(vlSelf->tb_dual_port_ram__DOT__output_enable_b));
    bufp->fullCData(oldp+5,(vlSelf->tb_dual_port_ram__DOT__address_a),8);
    bufp->fullCData(oldp+6,(vlSelf->tb_dual_port_ram__DOT__address_b),8);
    bufp->fullCData(oldp+7,(vlSelf->tb_dual_port_ram__DOT__data_in_a),8);
    bufp->fullCData(oldp+8,(vlSelf->tb_dual_port_ram__DOT__data_in_b),8);
    bufp->fullBit(oldp+9,(((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_a) 
                           & ((IData)(vlSelf->tb_dual_port_ram__DOT__write_enable_b) 
                              & ((IData)(vlSelf->tb_dual_port_ram__DOT__address_a) 
                                 == (IData)(vlSelf->tb_dual_port_ram__DOT__address_b))))));
    bufp->fullIData(oldp+10,(vlSelf->tb_dual_port_ram__DOT__pass_count),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_dual_port_ram__DOT__fail_count),32);
    bufp->fullBit(oldp+12,(vlSelf->tb_dual_port_ram__DOT__clk_a));
    bufp->fullBit(oldp+13,(vlSelf->tb_dual_port_ram__DOT__clk_b));
    bufp->fullCData(oldp+14,(vlSelf->tb_dual_port_ram__DOT__data_out_a),8);
    bufp->fullCData(oldp+15,(vlSelf->tb_dual_port_ram__DOT__data_out_b),8);
    bufp->fullIData(oldp+16,(8U),32);
    bufp->fullIData(oldp+17,(0x100U),32);
}
