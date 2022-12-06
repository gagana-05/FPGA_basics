module wavy(i_clk, o_led);
parameter WIDTH = 8;
input i_clk;
output reg [WIDTH-1:0]o_led;

reg [3:0] led_index;

initial led_index = 0; // Our "state" variable
always @(posedge i_clk) begin
if (led_index >= 4'd13) led_index <=0;
else led_index <= led_index + 1;
end

always @(posedge i_clk) begin
case(led_index) 

4'h0 : o_led <= 8'h01;
4'h1 : o_led <= 8'h02;
4'h2 : o_led <= 8'h04;
4'h3 : o_led <= 8'h08;
4'h4 : o_led <= 8'h10;
4'h5 : o_led <= 8'h20;
4'h6 : o_led <= 8'h40;
4'h7 : o_led <= 8'h80;
4'h8 : o_led <= 8'h40;
4'h9 : o_led <= 8'h20;
4'ha : o_led <= 8'h10;
4'hb : o_led <= 8'h08;
4'hc : o_led <= 8'h04;
4'hd : o_led <= 8'h02;
4'he : o_led <= 8'h01;
default: o_led <= 8'h01;
endcase
end

endmodule