

#include "Header.h" /*Inclusione dell'"header.h"*/  

int indice(char parola[])
{
	int i;    /*La variabile 'i' è una variabile locale della function, essa
                viena utilizzata per la lettera selezionata*/

	switch (parola[0])
		{
			case 'a': i=0; break;
			case 'b': i=1; break;
			case 'c': i=2; break;
			case 'd': i=3; break;
			case 'e': i=4; break;
			case 'f': i=5; break;
			case 'g': i=6; break;
			case 'h': i=7; break;
			case 'i': i=8; break;
			case 'l': i=9; break;
			case 'm': i=10; break;
			case 'n': i=11; break;
			case 'o': i=12; break;
			case 'p': i=13; break;
			case 'q': i=14; break;
			case 'r': i=15; break;
			case 's': i=16; break;
			case 't': i=17; break;
			case 'u': i=18; break;
			case 'v': i=19; break;
			case 'z': i=20; break;	
		}

return i;

}
