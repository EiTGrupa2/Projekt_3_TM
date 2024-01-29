//Wyłączenie zasilania i port wejściowy zegara szeregowego
#define PD_SCK_PORT PORTA
#define PD_SCK_DDR DDRA
#define PD_SCK_NR PA7
#define PD_SCK_SET_HIGH PD_SCK_PORT |= (1<<PD_SCK_NR)
#define PD_SCK_SET_LOW PD_SCK_PORT &= ~(1<<PD_SCK_NR)
#define PD_SCK_SET_AS_OUTPUT PD_SCK_DDR |= (1<<PD_SCK_NR)
//Szeregowy port wyjściowy danych
#define DOUT_PORT PORTB
#define DOUT_DDR DDRB
#define DOUT_PIN PINB
#define DOUT_NR PB1
#define DOUT_SET_AS_INPUT DOUT_DDR &= ~(1<<DOUT_NR)
#define DOUT_PULL_UP DOUT_PORT |= (1<<DOUT_NR)
#define DOUT_READ (DOUT_PIN & (1<<DOUT_NR))
#define GAIN_128 0x01 //Kanał A, wzmocnienie = 128
#define GAIN_64 0x03 //Kanał A, Wzmocnienie = 64
#define GAIN_32 0x02 //Kanał B, Wzmocnienie = 32