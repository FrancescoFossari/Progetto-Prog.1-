#include <stdio.h>      /*Inclusione delle librerie "stdio.h"*/
#include <stdlib.h>     /*Inclusione delle librerie "stdlib.h"*/
#include <string.h>     /*Inclusione delle librerie "string.h"*/

struct dizionario{           /* Dichiarazione struct dizionario formata da 2 array 2D di tipo char di diverso size */
	char parola [10][15];
	char contrario [5][20];
};

typedef struct dizionario Dizionario;             /*Per non confonderci, definiamo un nuovo tipo con la typedef,
                                                                     quindi "struct dizionario" diventa "Dizionario"*/

int indice(char []);                  /*Il prototipo della function "indice" prende in input un array di char
                                                  e permette di individuare la prima lettera di quest'ultima
                                                   e ritorna l'indice corrispondente ad essa. */
















