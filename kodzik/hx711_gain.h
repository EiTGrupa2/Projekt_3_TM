void hx711init(uint8_t Gain){
//Piny Init
PD_SCK_SET_AS_OUTPUT;
PD_SCK_SET_LOW;
DOUT_SET_AS_INPUT;
DOUT_PULL_UP;
//Ustaw kanał
//i wzmocnienie
//dla kolejnego odczytu
hx711read(Gain);
}
