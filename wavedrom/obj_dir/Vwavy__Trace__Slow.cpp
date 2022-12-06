// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vwavy__Syms.h"


//======================

void Vwavy::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vwavy::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vwavy__Syms* __restrict vlSymsp = static_cast<Vwavy__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vwavy::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vwavy::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vwavy__Syms* __restrict vlSymsp = static_cast<Vwavy__Syms*>(userp);
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vwavy::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vwavy__Syms* __restrict vlSymsp = static_cast<Vwavy__Syms*>(userp);
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"i_clk", false,-1);
        tracep->declBus(c+2,"o_led", false,-1, 7,0);
        tracep->declBus(c+4,"wavy WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"wavy i_clk", false,-1);
        tracep->declBus(c+2,"wavy o_led", false,-1, 7,0);
        tracep->declBus(c+3,"wavy led_index", false,-1, 3,0);
    }
}

void Vwavy::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vwavy::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vwavy__Syms* __restrict vlSymsp = static_cast<Vwavy__Syms*>(userp);
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vwavy::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vwavy__Syms* __restrict vlSymsp = static_cast<Vwavy__Syms*>(userp);
    Vwavy* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->i_clk));
        tracep->fullCData(oldp+2,(vlTOPp->o_led),8);
        tracep->fullCData(oldp+3,(vlTOPp->wavy__DOT__led_index),4);
        tracep->fullIData(oldp+4,(8U),32);
    }
}
