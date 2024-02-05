uint8_t hx711isReady(){
//HX711 zwraca 0 kiedy jest gotowe
return DOUT_READ == 0x00;
}
