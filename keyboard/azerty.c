#define M -0x20*maj
char azerty2c(int keycode, int maj)
{
	switch(keycode){
		case 0x02 : return '1';
		case 0x03 : return '2';
		case 0x04 : return '3';
		case 0x05 : return '4';
		case 0x06 : return '5';
		case 0x07 : return '6';
		case 0x08 : return '7';
		case 0x09 : return '8';
		case 0x0A : return '9';
		case 0x0B : return '0';
		case 0x10 : return 'q'M;
		case 0x11 : return 'w'M;
		case 0x12 : return 'e'M;
		case 0x13 : return 'r'M;
		case 0x14 : return 't'M;
		case 0x15 : return 'y'M;
		case 0x16 : return 'u'M;
		case 0x17 : return 'i'M;
		case 0x18 : return 'o'M;
		case 0x19 : return 'p'M;
		case 0x1E : return 'a'M;
		case 0x1F : return 's'M;
		case 0x20 : return 'd'M; 
		case 0x21 : return 'f'M;
		case 0x22 : return 'g'M;
		case 0x23 : return 'h'M;
		case 0x24 : return 'j'M;
		case 0x25 : return 'k'M;
		case 0x26 : return 'l'M; 
		case 0x27 : return 'm'M;
		case 0x2C : return 'z'M;
		case 0x2D : return 'x'M;
		case 0x2E : return 'c'M; 
		case 0x2F : return 'v'M;
		case 0x30 : return 'b'M; 
		case 0x31 : return 'n'M;
		case 0x32 : return 'm';
		case 0x39 : return ' ';
		case 0x3B : return '[';
		case 0x44 : return ']';
		default : return 0;
	}

}
