// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dual_port_ram.h for the primary calling header

#include "verilated.h"

#include "Vtb_dual_port_ram__Syms.h"
#include "Vtb_dual_port_ram__Syms.h"
#include "Vtb_dual_port_ram___024root.h"

void Vtb_dual_port_ram___024root___ctor_var_reset(Vtb_dual_port_ram___024root* vlSelf);

Vtb_dual_port_ram___024root::Vtb_dual_port_ram___024root(Vtb_dual_port_ram__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_dual_port_ram___024root___ctor_var_reset(this);
}

void Vtb_dual_port_ram___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_dual_port_ram___024root::~Vtb_dual_port_ram___024root() {
}
