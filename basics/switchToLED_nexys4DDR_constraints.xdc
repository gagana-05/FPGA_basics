# they define and form the synthesis and application of where the signals are coming from
# 324 pins at the bottom of the FPGA
# set i/o standard
# set to low voltage CMOS 3.3 
# resistor to drive LED 330 ohms ~ 10- 20mA
set_property PACKAGE_PIN J15 [get_ports slideSwitch]
set_property IOSTANDARD LVCMOS33 [get_ports slideSwitch]

set_property PACKAGE_PIN H17 [get_ports led]
set_property IOSTANDARD LVCMOS33 [get_ports led]