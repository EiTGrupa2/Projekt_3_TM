uint32_t hx711read(uint8_t Gain){
uint32_t Value = 0;
//Czeka na gotowość HX711
while(!hx711isReady());
//Odczytuje wszystkie 24 bity z MSB
for(uint8_t i = 0; i < 24; ++i){
Value <<= 1;
PD_SCK_SET_HIGH;
_delay_us(1);
if(DOUT_READ) Value++;
PD_SCK_SET_LOW;
_delay_us(1);
}
//Ustawia kanal i wzmocnienie dla nastepnego odczytu
for (uint8_t i = 0; i < Gain; ++i){
PD_SCK_SET_HIGH;
_delay_us(1);
PD_SCK_SET_LOW;
_delay_us(1);
}
return Value;
}
