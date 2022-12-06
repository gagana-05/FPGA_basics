// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwavy__Syms.h"


void Vwavy::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vwavy__Syms* __restrict vlSymsp = static_cast<Vwavy__Syms*>(userp);
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vwavy::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vwavy__Syms* __restrict vlSymsp = static_cast<Vwavy__Syms*>(userp);
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->i_clk));
        tracep->chgCData(oldp+1,(vlTOPp->o_led),8);
        tracep->chgCData(oldp+2,(vlTOPp->wavy__DOT__led_index),4);
    }
}

void Vwavy::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vwavy__Syms* __restrict vlSymsp = static_cast<Vwavy__Syms*>(userp);
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
