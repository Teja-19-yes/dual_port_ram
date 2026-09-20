// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dual_port_ram.h for the primary calling header

#ifndef VERILATED_VTB_DUAL_PORT_RAM___024ROOT_H_
#define VERILATED_VTB_DUAL_PORT_RAM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dual_port_ram__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dual_port_ram___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_dual_port_ram__DOT__clk_a;
    CData/*0:0*/ tb_dual_port_ram__DOT__clk_b;
    CData/*0:0*/ tb_dual_port_ram__DOT__write_enable_a;
    CData/*0:0*/ tb_dual_port_ram__DOT__write_enable_b;
    CData/*0:0*/ tb_dual_port_ram__DOT__output_enable_a;
    CData/*0:0*/ tb_dual_port_ram__DOT__output_enable_b;
    CData/*7:0*/ tb_dual_port_ram__DOT__address_a;
    CData/*7:0*/ tb_dual_port_ram__DOT__address_b;
    CData/*7:0*/ tb_dual_port_ram__DOT__data_in_a;
    CData/*7:0*/ tb_dual_port_ram__DOT__data_in_b;
    CData/*7:0*/ tb_dual_port_ram__DOT__data_out_a;
    CData/*7:0*/ tb_dual_port_ram__DOT__data_out_b;
    CData/*0:0*/ tb_dual_port_ram__DOT__collision;
    CData/*0:0*/ __Vdlyvval__tb_dual_port_ram__DOT__clk_b__v0;
    CData/*0:0*/ __Vdlyvset__tb_dual_port_ram__DOT__clk_b__v0;
    CData/*0:0*/ __Vdlyvval__tb_dual_port_ram__DOT__clk_a__v0;
    CData/*0:0*/ __Vdlyvset__tb_dual_port_ram__DOT__clk_a__v0;
    CData/*7:0*/ __Vdlyvdim0__tb_dual_port_ram__DOT__uut__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__tb_dual_port_ram__DOT__uut__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvdim0__tb_dual_port_ram__DOT__uut__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__tb_dual_port_ram__DOT__uut__DOT__memory__v1;
    CData/*0:0*/ __Vdlyvset__tb_dual_port_ram__DOT__uut__DOT__memory__v1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_a__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_b__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_dual_port_ram__DOT__pass_count;
    IData/*31:0*/ tb_dual_port_ram__DOT__fail_count;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 256> tb_dual_port_ram__DOT__uut__DOT__memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_dual_port_ram__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_dual_port_ram___024root(Vtb_dual_port_ram__Syms* symsp, const char* v__name);
    ~Vtb_dual_port_ram___024root();
    VL_UNCOPYABLE(Vtb_dual_port_ram___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
