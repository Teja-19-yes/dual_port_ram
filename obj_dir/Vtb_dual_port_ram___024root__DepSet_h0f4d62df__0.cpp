// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dual_port_ram.h for the primary calling header

#include "verilated.h"

#include "Vtb_dual_port_ram__Syms.h"
#include "Vtb_dual_port_ram__Syms.h"
#include "Vtb_dual_port_ram___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_dual_port_ram___024root___eval_initial__TOP__0(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__1__addr;
    __Vtask_tb_dual_port_ram__DOT__write_a__1__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__1__data;
    __Vtask_tb_dual_port_ram__DOT__write_a__1__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__2__addr;
    __Vtask_tb_dual_port_ram__DOT__write_a__2__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__2__data;
    __Vtask_tb_dual_port_ram__DOT__write_a__2__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__3__addr;
    __Vtask_tb_dual_port_ram__DOT__write_a__3__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__3__data;
    __Vtask_tb_dual_port_ram__DOT__write_a__3__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__4__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__4__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__4__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__4__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__5__expected;
    __Vtask_tb_dual_port_ram__DOT__check__5__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__5__actual;
    __Vtask_tb_dual_port_ram__DOT__check__5__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__5__addr;
    __Vtask_tb_dual_port_ram__DOT__check__5__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__5__port;
    __Vtask_tb_dual_port_ram__DOT__check__5__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__6__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__6__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__6__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__6__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__7__expected;
    __Vtask_tb_dual_port_ram__DOT__check__7__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__7__actual;
    __Vtask_tb_dual_port_ram__DOT__check__7__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__7__addr;
    __Vtask_tb_dual_port_ram__DOT__check__7__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__7__port;
    __Vtask_tb_dual_port_ram__DOT__check__7__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__8__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__8__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__8__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__8__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__9__expected;
    __Vtask_tb_dual_port_ram__DOT__check__9__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__9__actual;
    __Vtask_tb_dual_port_ram__DOT__check__9__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__9__addr;
    __Vtask_tb_dual_port_ram__DOT__check__9__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__9__port;
    __Vtask_tb_dual_port_ram__DOT__check__9__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__10__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__10__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__10__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__10__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__11__expected;
    __Vtask_tb_dual_port_ram__DOT__check__11__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__11__actual;
    __Vtask_tb_dual_port_ram__DOT__check__11__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__11__addr;
    __Vtask_tb_dual_port_ram__DOT__check__11__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__11__port;
    __Vtask_tb_dual_port_ram__DOT__check__11__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__12__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__12__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__12__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__12__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__13__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__13__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__13__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__13__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__14__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__14__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__14__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__14__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__15__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__15__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__15__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__15__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__16__addr;
    __Vtask_tb_dual_port_ram__DOT__read_b__16__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__16__expected;
    __Vtask_tb_dual_port_ram__DOT__read_b__16__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__17__expected;
    __Vtask_tb_dual_port_ram__DOT__check__17__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__17__actual;
    __Vtask_tb_dual_port_ram__DOT__check__17__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__17__addr;
    __Vtask_tb_dual_port_ram__DOT__check__17__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__17__port;
    __Vtask_tb_dual_port_ram__DOT__check__17__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__18__addr;
    __Vtask_tb_dual_port_ram__DOT__read_b__18__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__18__expected;
    __Vtask_tb_dual_port_ram__DOT__read_b__18__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__19__expected;
    __Vtask_tb_dual_port_ram__DOT__check__19__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__19__actual;
    __Vtask_tb_dual_port_ram__DOT__check__19__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__19__addr;
    __Vtask_tb_dual_port_ram__DOT__check__19__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__19__port;
    __Vtask_tb_dual_port_ram__DOT__check__19__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__20__addr;
    __Vtask_tb_dual_port_ram__DOT__read_b__20__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__20__expected;
    __Vtask_tb_dual_port_ram__DOT__read_b__20__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__21__expected;
    __Vtask_tb_dual_port_ram__DOT__check__21__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__21__actual;
    __Vtask_tb_dual_port_ram__DOT__check__21__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__21__addr;
    __Vtask_tb_dual_port_ram__DOT__check__21__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__21__port;
    __Vtask_tb_dual_port_ram__DOT__check__21__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__22__addr;
    __Vtask_tb_dual_port_ram__DOT__read_b__22__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__22__expected;
    __Vtask_tb_dual_port_ram__DOT__read_b__22__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__23__expected;
    __Vtask_tb_dual_port_ram__DOT__check__23__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__23__actual;
    __Vtask_tb_dual_port_ram__DOT__check__23__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__23__addr;
    __Vtask_tb_dual_port_ram__DOT__check__23__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__23__port;
    __Vtask_tb_dual_port_ram__DOT__check__23__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__24__addr;
    __Vtask_tb_dual_port_ram__DOT__write_a__24__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__24__data;
    __Vtask_tb_dual_port_ram__DOT__write_a__24__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__25__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__25__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__25__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__25__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__26__addr;
    __Vtask_tb_dual_port_ram__DOT__read_b__26__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__26__expected;
    __Vtask_tb_dual_port_ram__DOT__read_b__26__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__27__expected;
    __Vtask_tb_dual_port_ram__DOT__check__27__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__27__actual;
    __Vtask_tb_dual_port_ram__DOT__check__27__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__27__addr;
    __Vtask_tb_dual_port_ram__DOT__check__27__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__27__port;
    __Vtask_tb_dual_port_ram__DOT__check__27__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__28__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__28__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__28__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__28__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__29__expected;
    __Vtask_tb_dual_port_ram__DOT__check__29__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__29__actual;
    __Vtask_tb_dual_port_ram__DOT__check__29__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__29__addr;
    __Vtask_tb_dual_port_ram__DOT__check__29__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__29__port;
    __Vtask_tb_dual_port_ram__DOT__check__29__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__30__addr;
    __Vtask_tb_dual_port_ram__DOT__write_a__30__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__30__data;
    __Vtask_tb_dual_port_ram__DOT__write_a__30__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__31__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__31__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__31__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__31__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__32__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__32__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__32__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__32__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__33__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__33__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__33__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__33__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__34__expected;
    __Vtask_tb_dual_port_ram__DOT__check__34__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__34__actual;
    __Vtask_tb_dual_port_ram__DOT__check__34__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__34__addr;
    __Vtask_tb_dual_port_ram__DOT__check__34__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__34__port;
    __Vtask_tb_dual_port_ram__DOT__check__34__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__35__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__35__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__35__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__35__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__36__expected;
    __Vtask_tb_dual_port_ram__DOT__check__36__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__36__actual;
    __Vtask_tb_dual_port_ram__DOT__check__36__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__36__addr;
    __Vtask_tb_dual_port_ram__DOT__check__36__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__36__port;
    __Vtask_tb_dual_port_ram__DOT__check__36__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__37__addr;
    __Vtask_tb_dual_port_ram__DOT__read_b__37__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__37__expected;
    __Vtask_tb_dual_port_ram__DOT__read_b__37__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__38__expected;
    __Vtask_tb_dual_port_ram__DOT__check__38__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__38__actual;
    __Vtask_tb_dual_port_ram__DOT__check__38__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__38__addr;
    __Vtask_tb_dual_port_ram__DOT__check__38__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__38__port;
    __Vtask_tb_dual_port_ram__DOT__check__38__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__39__addr;
    __Vtask_tb_dual_port_ram__DOT__write_a__39__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__39__data;
    __Vtask_tb_dual_port_ram__DOT__write_a__39__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__40__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__40__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__40__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__40__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__41__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__41__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__41__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__41__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__42__expected;
    __Vtask_tb_dual_port_ram__DOT__check__42__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__42__actual;
    __Vtask_tb_dual_port_ram__DOT__check__42__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__42__addr;
    __Vtask_tb_dual_port_ram__DOT__check__42__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__42__port;
    __Vtask_tb_dual_port_ram__DOT__check__42__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__43__addr;
    __Vtask_tb_dual_port_ram__DOT__read_b__43__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__43__expected;
    __Vtask_tb_dual_port_ram__DOT__read_b__43__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__44__expected;
    __Vtask_tb_dual_port_ram__DOT__check__44__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__44__actual;
    __Vtask_tb_dual_port_ram__DOT__check__44__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__44__addr;
    __Vtask_tb_dual_port_ram__DOT__check__44__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__44__port;
    __Vtask_tb_dual_port_ram__DOT__check__44__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__45__addr;
    __Vtask_tb_dual_port_ram__DOT__write_a__45__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__45__data;
    __Vtask_tb_dual_port_ram__DOT__write_a__45__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__46__addr;
    __Vtask_tb_dual_port_ram__DOT__write_a__46__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_a__46__data;
    __Vtask_tb_dual_port_ram__DOT__write_a__46__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__47__addr;
    __Vtask_tb_dual_port_ram__DOT__read_a__47__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_a__47__expected;
    __Vtask_tb_dual_port_ram__DOT__read_a__47__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__48__expected;
    __Vtask_tb_dual_port_ram__DOT__check__48__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__48__actual;
    __Vtask_tb_dual_port_ram__DOT__check__48__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__48__addr;
    __Vtask_tb_dual_port_ram__DOT__check__48__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__48__port;
    __Vtask_tb_dual_port_ram__DOT__check__48__port = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__49__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__49__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__49__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__49__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__50__addr;
    __Vtask_tb_dual_port_ram__DOT__write_b__50__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__write_b__50__data;
    __Vtask_tb_dual_port_ram__DOT__write_b__50__data = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__51__addr;
    __Vtask_tb_dual_port_ram__DOT__read_b__51__addr = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__read_b__51__expected;
    __Vtask_tb_dual_port_ram__DOT__read_b__51__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__52__expected;
    __Vtask_tb_dual_port_ram__DOT__check__52__expected = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__52__actual;
    __Vtask_tb_dual_port_ram__DOT__check__52__actual = 0;
    CData/*7:0*/ __Vtask_tb_dual_port_ram__DOT__check__52__addr;
    __Vtask_tb_dual_port_ram__DOT__check__52__addr = 0;
    CData/*0:0*/ __Vtask_tb_dual_port_ram__DOT__check__52__port;
    __Vtask_tb_dual_port_ram__DOT__check__52__port = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f72616dU;
    __Vtemp_1[2U] = 0x706f7274U;
    __Vtemp_1[3U] = 0x75616c5fU;
    __Vtemp_1[4U] = 0x64U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("\n========================================\n  Dual-Port RAM Testbench\n========================================\n\n--- TEST 1: Port A write/read ---\n");
    vlSelf->tb_dual_port_ram__DOT__address_a = 0U;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = 0xaaU;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_a__1__data = 0xbbU;
    __Vtask_tb_dual_port_ram__DOT__write_a__1__addr = 1U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__write_a__1__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = __Vtask_tb_dual_port_ram__DOT__write_a__1__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_a__2__data = 0xccU;
    __Vtask_tb_dual_port_ram__DOT__write_a__2__addr = 2U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__write_a__2__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = __Vtask_tb_dual_port_ram__DOT__write_a__2__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_a__3__data = 0xddU;
    __Vtask_tb_dual_port_ram__DOT__write_a__3__addr = 3U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__write_a__3__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = __Vtask_tb_dual_port_ram__DOT__write_a__3__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__4__expected = 0xaaU;
    __Vtask_tb_dual_port_ram__DOT__read_a__4__addr = 0U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__4__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__5__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__5__addr = __Vtask_tb_dual_port_ram__DOT__read_a__4__addr;
    __Vtask_tb_dual_port_ram__DOT__check__5__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__5__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__4__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__5__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__5__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__5__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__5__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__5__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__5__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__5__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__5__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__5__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__6__expected = 0xbbU;
    __Vtask_tb_dual_port_ram__DOT__read_a__6__addr = 1U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__6__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__7__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__7__addr = __Vtask_tb_dual_port_ram__DOT__read_a__6__addr;
    __Vtask_tb_dual_port_ram__DOT__check__7__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__7__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__6__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__7__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__7__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__7__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__7__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__7__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__7__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__7__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__7__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__7__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__8__expected = 0xccU;
    __Vtask_tb_dual_port_ram__DOT__read_a__8__addr = 2U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__8__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__9__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__9__addr = __Vtask_tb_dual_port_ram__DOT__read_a__8__addr;
    __Vtask_tb_dual_port_ram__DOT__check__9__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__9__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__8__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__9__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__9__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__9__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__9__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__9__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__9__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__9__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__9__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__9__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__10__expected = 0xddU;
    __Vtask_tb_dual_port_ram__DOT__read_a__10__addr = 3U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__10__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__11__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__11__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_a__10__addr;
    __Vtask_tb_dual_port_ram__DOT__check__11__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__11__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__10__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__11__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__11__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__11__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__11__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__11__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__11__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__11__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__11__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__11__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- TEST 2: Port B write/read ---\n");
    __Vtask_tb_dual_port_ram__DOT__write_b__12__data = 0x11U;
    __Vtask_tb_dual_port_ram__DOT__write_b__12__addr = 0xaU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__12__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__12__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_b__13__data = 0x22U;
    __Vtask_tb_dual_port_ram__DOT__write_b__13__addr = 0xbU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__13__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__13__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_b__14__data = 0x33U;
    __Vtask_tb_dual_port_ram__DOT__write_b__14__addr = 0xcU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__14__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__14__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_b__15__data = 0x44U;
    __Vtask_tb_dual_port_ram__DOT__write_b__15__addr = 0xdU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__15__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__15__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__16__expected = 0x11U;
    __Vtask_tb_dual_port_ram__DOT__read_b__16__addr = 0xaU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__read_b__16__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__17__port = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__17__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_b__16__addr;
    __Vtask_tb_dual_port_ram__DOT__check__17__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_b;
    __Vtask_tb_dual_port_ram__DOT__check__17__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_b__16__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__17__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__17__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__17__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__17__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__17__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__17__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__17__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__17__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__17__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__18__expected = 0x22U;
    __Vtask_tb_dual_port_ram__DOT__read_b__18__addr = 0xbU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__read_b__18__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__19__port = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__19__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_b__18__addr;
    __Vtask_tb_dual_port_ram__DOT__check__19__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_b;
    __Vtask_tb_dual_port_ram__DOT__check__19__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_b__18__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__19__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__19__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__19__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__19__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__19__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__19__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__19__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__19__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__19__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__20__expected = 0x33U;
    __Vtask_tb_dual_port_ram__DOT__read_b__20__addr = 0xcU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__read_b__20__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__21__port = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__21__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_b__20__addr;
    __Vtask_tb_dual_port_ram__DOT__check__21__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_b;
    __Vtask_tb_dual_port_ram__DOT__check__21__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_b__20__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__21__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__21__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__21__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__21__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__21__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__21__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__21__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__21__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__21__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__22__expected = 0x44U;
    __Vtask_tb_dual_port_ram__DOT__read_b__22__addr = 0xdU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__read_b__22__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__23__port = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__23__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_b__22__addr;
    __Vtask_tb_dual_port_ram__DOT__check__23__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_b;
    __Vtask_tb_dual_port_ram__DOT__check__23__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_b__22__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__23__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__23__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__23__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__23__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__23__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__23__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__23__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__23__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__23__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- TEST 3: Cross-port reads ---\n");
    __Vtask_tb_dual_port_ram__DOT__write_a__24__data = 0xabU;
    __Vtask_tb_dual_port_ram__DOT__write_a__24__addr = 0x14U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__write_a__24__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = __Vtask_tb_dual_port_ram__DOT__write_a__24__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_b__25__data = 0xcdU;
    __Vtask_tb_dual_port_ram__DOT__write_b__25__addr = 0x15U;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__25__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__25__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__26__expected = 0xabU;
    __Vtask_tb_dual_port_ram__DOT__read_b__26__addr = 0x14U;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__read_b__26__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__27__port = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__27__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_b__26__addr;
    __Vtask_tb_dual_port_ram__DOT__check__27__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_b;
    __Vtask_tb_dual_port_ram__DOT__check__27__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_b__26__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__27__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__27__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__27__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__27__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__27__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__27__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__27__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__27__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__27__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__28__expected = 0xcdU;
    __Vtask_tb_dual_port_ram__DOT__read_a__28__addr = 0x15U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__28__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__29__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__29__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_a__28__addr;
    __Vtask_tb_dual_port_ram__DOT__check__29__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__29__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__28__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__29__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__29__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__29__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__29__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__29__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__29__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__29__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__29__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__29__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- TEST 4: OE=0 forces output to 0 ---\n");
    __Vtask_tb_dual_port_ram__DOT__write_a__30__data = 0xffU;
    __Vtask_tb_dual_port_ram__DOT__write_a__30__addr = 0x1eU;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__write_a__30__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = __Vtask_tb_dual_port_ram__DOT__write_a__30__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__address_a = 0x1eU;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       154);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U == (IData)(vlSelf->tb_dual_port_ram__DOT__data_out_a))) {
        VL_WRITEF("  PASS | Port A OE=0 | data_out_a=0x%02x\n",
                  8,vlSelf->tb_dual_port_ram__DOT__data_out_a);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port A OE=0 | expected=0x00 got=0x%02x\n",
                  8,vlSelf->tb_dual_port_ram__DOT__data_out_a);
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    __Vtask_tb_dual_port_ram__DOT__write_b__31__data = 0xffU;
    __Vtask_tb_dual_port_ram__DOT__write_b__31__addr = 0x1fU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__31__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__31__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       164);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__address_b = 0x1fU;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       167);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((0U == (IData)(vlSelf->tb_dual_port_ram__DOT__data_out_b))) {
        VL_WRITEF("  PASS | Port B OE=0 | data_out_b=0x%02x\n",
                  8,vlSelf->tb_dual_port_ram__DOT__data_out_b);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port B OE=0 | expected=0x00 got=0x%02x\n",
                  8,vlSelf->tb_dual_port_ram__DOT__data_out_b);
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    VL_WRITEF("\n--- TEST 5: Collision (Port A wins) ---\n");
    __Vtask_tb_dual_port_ram__DOT__write_b__32__data = 0U;
    __Vtask_tb_dual_port_ram__DOT__write_b__32__addr = 0x32U;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__32__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__32__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__address_a = 0x32U;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = 0xaaU;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    vlSelf->tb_dual_port_ram__DOT__address_b = 0x32U;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = 0xbbU;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       182);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSelf->tb_dual_port_ram__DOT__collision) {
        VL_WRITEF("  PASS | collision flag asserted\n");
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | collision flag not asserted\n");
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       190);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       192);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__33__expected = 0xaaU;
    __Vtask_tb_dual_port_ram__DOT__read_a__33__addr = 0x32U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__33__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__34__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__34__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_a__33__addr;
    __Vtask_tb_dual_port_ram__DOT__check__34__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__34__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__33__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__34__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__34__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__34__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__34__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__34__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__34__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__34__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__34__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__34__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- TEST 6: No collision (different addresses) ---\n");
    vlSelf->tb_dual_port_ram__DOT__address_a = 0x3cU;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = 0x5aU;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    vlSelf->tb_dual_port_ram__DOT__address_b = 0x3dU;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = 0x6bU;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       199);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (vlSelf->tb_dual_port_ram__DOT__collision) {
        VL_WRITEF("  FAIL | spurious collision flagged\n");
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    } else {
        VL_WRITEF("  PASS | no spurious collision\n");
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    }
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       207);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       209);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__35__expected = 0x5aU;
    __Vtask_tb_dual_port_ram__DOT__read_a__35__addr = 0x3cU;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__35__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__36__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__36__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_a__35__addr;
    __Vtask_tb_dual_port_ram__DOT__check__36__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__36__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__35__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__36__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__36__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__36__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__36__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__36__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__36__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__36__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__36__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__36__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__37__expected = 0x6bU;
    __Vtask_tb_dual_port_ram__DOT__read_b__37__addr = 0x3dU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__read_b__37__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__38__port = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__38__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_b__37__addr;
    __Vtask_tb_dual_port_ram__DOT__check__38__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_b;
    __Vtask_tb_dual_port_ram__DOT__check__38__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_b__37__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__38__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__38__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__38__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__38__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__38__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__38__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__38__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__38__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__38__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- TEST 7: Boundary addresses ---\n");
    __Vtask_tb_dual_port_ram__DOT__write_a__39__data = 0xdeU;
    __Vtask_tb_dual_port_ram__DOT__write_a__39__addr = 0U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__write_a__39__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = __Vtask_tb_dual_port_ram__DOT__write_a__39__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_b__40__data = 0xadU;
    __Vtask_tb_dual_port_ram__DOT__write_b__40__addr = 0xffU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__40__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__40__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__41__expected = 0xdeU;
    __Vtask_tb_dual_port_ram__DOT__read_a__41__addr = 0U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__41__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__42__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__42__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_a__41__addr;
    __Vtask_tb_dual_port_ram__DOT__check__42__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__42__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__41__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__42__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__42__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__42__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__42__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__42__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__42__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__42__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__42__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__42__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__43__expected = 0xadU;
    __Vtask_tb_dual_port_ram__DOT__read_b__43__addr = 0xffU;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__read_b__43__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__44__port = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__44__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_b__43__addr;
    __Vtask_tb_dual_port_ram__DOT__check__44__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_b;
    __Vtask_tb_dual_port_ram__DOT__check__44__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_b__43__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__44__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__44__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__44__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__44__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__44__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__44__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__44__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__44__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__44__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- TEST 8: Overwrite ---\n");
    __Vtask_tb_dual_port_ram__DOT__write_a__45__data = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_a__45__addr = 0x46U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__write_a__45__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = __Vtask_tb_dual_port_ram__DOT__write_a__45__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_a__46__data = 2U;
    __Vtask_tb_dual_port_ram__DOT__write_a__46__addr = 0x46U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__write_a__46__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_a = __Vtask_tb_dual_port_ram__DOT__write_a__46__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_a__47__expected = 2U;
    __Vtask_tb_dual_port_ram__DOT__read_a__47__addr = 0x46U;
    vlSelf->tb_dual_port_ram__DOT__address_a = __Vtask_tb_dual_port_ram__DOT__read_a__47__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__48__port = 0U;
    __Vtask_tb_dual_port_ram__DOT__check__48__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_a__47__addr;
    __Vtask_tb_dual_port_ram__DOT__check__48__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_a;
    __Vtask_tb_dual_port_ram__DOT__check__48__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_a__47__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__48__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__48__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__48__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__48__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__48__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__48__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__48__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__48__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__48__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       93);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_b__49__data = 0xf0U;
    __Vtask_tb_dual_port_ram__DOT__write_b__49__addr = 0x47U;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__49__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__49__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__write_b__50__data = 0xf1U;
    __Vtask_tb_dual_port_ram__DOT__write_b__50__addr = 0x47U;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__write_b__50__addr;
    vlSelf->tb_dual_port_ram__DOT__data_in_b = __Vtask_tb_dual_port_ram__DOT__write_b__50__data;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_dual_port_ram__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__51__expected = 0xf1U;
    __Vtask_tb_dual_port_ram__DOT__read_b__51__addr = 0x47U;
    vlSelf->tb_dual_port_ram__DOT__address_b = __Vtask_tb_dual_port_ram__DOT__read_b__51__addr;
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__52__port = 1U;
    __Vtask_tb_dual_port_ram__DOT__check__52__addr 
        = __Vtask_tb_dual_port_ram__DOT__read_b__51__addr;
    __Vtask_tb_dual_port_ram__DOT__check__52__actual 
        = vlSelf->tb_dual_port_ram__DOT__data_out_b;
    __Vtask_tb_dual_port_ram__DOT__check__52__expected 
        = __Vtask_tb_dual_port_ram__DOT__read_b__51__expected;
    if (((IData)(__Vtask_tb_dual_port_ram__DOT__check__52__actual) 
         == (IData)(__Vtask_tb_dual_port_ram__DOT__check__52__expected))) {
        VL_WRITEF("  PASS | Port %s | addr=%0# | got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__52__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__52__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__52__actual);
        vlSelf->tb_dual_port_ram__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__pass_count);
    } else {
        VL_WRITEF("  FAIL | Port %s | addr=%0# | expected=0x%02x got=0x%02x\n",
                  8,((IData)(__Vtask_tb_dual_port_ram__DOT__check__52__port)
                      ? 0x42U : 0x41U),8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__52__addr),
                  8,__Vtask_tb_dual_port_ram__DOT__check__52__expected,
                  8,(IData)(__Vtask_tb_dual_port_ram__DOT__check__52__actual));
        vlSelf->tb_dual_port_ram__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_dual_port_ram__DOT__fail_count);
    }
    vlSelf->tb_dual_port_ram__DOT__output_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x36b0ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb_dual_port_ram.v", 
                                       230);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n========================================\n  Results: %0d PASSED | %0d FAILED\n========================================\n\n",
              32,vlSelf->tb_dual_port_ram__DOT__pass_count,
              32,vlSelf->tb_dual_port_ram__DOT__fail_count);
    if ((0U == vlSelf->tb_dual_port_ram__DOT__fail_count)) {
        VL_WRITEF("  ALL TESTS PASSED\n\n");
    } else {
        VL_WRITEF("  SOME TESTS FAILED\n\n");
    }
    VL_FINISH_MT("tb_dual_port_ram.v", 240, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dual_port_ram___024root___dump_triggers__act(Vtb_dual_port_ram___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_dual_port_ram___024root___eval_triggers__act(Vtb_dual_port_ram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_dual_port_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dual_port_ram___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_dual_port_ram__DOT__clk_a) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_a__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_dual_port_ram__DOT__clk_b) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_b__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->tb_dual_port_ram__DOT__clk_a) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_a__0))) 
                                     | ((IData)(vlSelf->tb_dual_port_ram__DOT__clk_b) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_b__0)))));
    vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_a__0 
        = vlSelf->tb_dual_port_ram__DOT__clk_a;
    vlSelf->__Vtrigprevexpr___TOP__tb_dual_port_ram__DOT__clk_b__0 
        = vlSelf->tb_dual_port_ram__DOT__clk_b;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dual_port_ram___024root___dump_triggers__act(vlSelf);
    }
#endif
}
