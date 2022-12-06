#include <stdio.h>
#include <stdlib.h>
#include "Vwavy.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

void	tick(int tickcount, Vwavy *tb, VerilatedVcdC* tfp) {
	tb->eval();
	if (tfp) //dump 2ns before the tick
		tfp->dump(tickcount * 10 - 2);
	tb->i_clk = 1;
	tb->eval();
	if (tfp) //tick every 10ns
		tfp->dump(tickcount * 10);
	tb->i_clk = 0;
	tb->eval();
	if (tfp) { //Trailing edge dump
		tfp->dump(tickcount * 10 + 5);
		tfp->flush();
	}
}

int main(int argc, char **argv) {
	int wavy;
	unsigned tickcount = 0;

	// Call commandArgs first!
	Verilated::commandArgs(argc, argv);

	// Instantiate our design
	Vwavy *tb = new Vwavy;

	// Generate a trace
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	tb->trace(tfp, 00);
	tfp->open("blinkytrace.vcd");

	wavy = tb->o_led;
	for(int k=0; k<100; k++) {
		tick(++tickcount, tb, tfp);

		// Now let's print our results
		if (wavy != tb->o_led) {
			printf("k = %7d, ", k);
			printf("led = %d\n", tb->o_led);
		} wavy = tb->o_led;
	}
}
