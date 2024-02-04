void hx711init(uint8_t Gain){
//Init pins
PD_SCK_SET_AS_OUTPUT;
PD_SCK_SET_LOW;
DOUT_SET_AS_INPUT;
DOUT_PULL_UP;
//Set the channel
//and the gain
//for the next reading
hx711read(Gain);
}
