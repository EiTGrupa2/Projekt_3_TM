//0: moc wyłaczona, 1: normalna operacja
void hx711setPower(uint8_t Power){
if(Power) PD_SCK_SET_LOW;
else PD_SCK_SET_HIGH;
_delay_us(60);
}
