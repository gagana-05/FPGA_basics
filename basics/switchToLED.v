`timescale 1ns / 1ps

module switchToLED(
    input slideSwitch,
    output led
    );

    assign led = slideSwitch;
endmodule
