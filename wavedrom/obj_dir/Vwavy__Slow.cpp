// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwavy.h for the primary calling header

#include "Vwavy.h"
#include "Vwavy__Syms.h"

//==========
CData/*7:0*/ Vwavy::__Vtable1_o_led[16];

VL_CTOR_IMP(Vwavy) {
    Vwavy__Syms* __restrict vlSymsp = __VlSymsp = new Vwavy__Syms(this, name());
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vwavy::__Vconfigure(Vwavy__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vwavy::~Vwavy() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vwavy::_initial__TOP__2(Vwavy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavy::_initial__TOP__2\n"); );
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->wavy__DOT__led_index = 0U;
}

void Vwavy::_eval_initial(Vwavy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavy::_eval_initial\n"); );
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->_initial__TOP__2(vlSymsp);
}

void Vwavy::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavy::final\n"); );
    // Variables
    Vwavy__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vwavy::_eval_settle(Vwavy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavy::_eval_settle\n"); );
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vwavy::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwavy::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    o_led = VL_RAND_RESET_I(8);
    wavy__DOT__led_index = VL_RAND_RESET_I(4);
    __Vtable1_o_led[0] = 1U;
    __Vtable1_o_led[1] = 2U;
    __Vtable1_o_led[2] = 4U;
    __Vtable1_o_led[3] = 8U;
    __Vtable1_o_led[4] = 0x10U;
    __Vtable1_o_led[5] = 0x20U;
    __Vtable1_o_led[6] = 0x40U;
    __Vtable1_o_led[7] = 0x80U;
    __Vtable1_o_led[8] = 0x40U;
    __Vtable1_o_led[9] = 0x20U;
    __Vtable1_o_led[10] = 0x10U;
    __Vtable1_o_led[11] = 8U;
    __Vtable1_o_led[12] = 4U;
    __Vtable1_o_led[13] = 2U;
    __Vtable1_o_led[14] = 1U;
    __Vtable1_o_led[15] = 1U;
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
