#include "Header.h" /*Inclusione dell'"header.h"*/

int indice(char parola[])
{
	int i;    /*La variabile 'i' ? una variabile locale della function,
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

int main()
{
                 //Parte delle dichiarazioni
    Dizionario termine[20];       /*Dichiariamo un'array di tipo struct, qui ? dove verranno
                                   memorizzate le parole e i loro contrari */

	char frase[100];               /*Dichiarazione array di char "frase"
                                    Qui verr? salvata la frase inserita dall'utente */

    char frasefinale[100];          /*Dichiarazione di un array di char "frasefinale"
                                                    Qui sar? salvata la nuova frase creata dal programma e
                                                     dalle scelte dell'utente*/

	char separatori[]={' ','\0','\t','\n'};            /*Dichiariamo un array di "char separatori".
                                                              Questi ultimi saranno necessari per la funzione "strtok" della
                                                               libreria "string.h" che estrae le parole dal testo.*/

    char *parola;                 /*Dichiariamo un puntatore a char "parola" nella quale verranno salvate
                                           le parole che la funzione "strtok" ha ricavato */

    char spazio[]={' '};          /*Dichiariamo un'ulteriore array di char "spazio".
                                             Abbiamo creato un'unica variabile specificifica per lo spazio
                                             poich? ci sar? utile nella creazione della nuova frase dove
                                             distanzieremo ogni parola di un solo spazio*/

	int i, j, x;                            /*Dichiariamo tre variabili di tipo int, le utilizzeremo
                                             per i cicli iterativi e le selezioni da tastiera da parte dell'utente*/


/*Questo ? l'elenco delle parole inserite nel dizionario.
 Viene usata la function "strcpy" della libreria <string.h> */

/*lettera A*/
strcpy(termine[0].parola[0], "abbassato");
strcpy(termine[0].contrario[0], "alzato");
strcpy(termine[0].contrario[1], "salito");
strcpy(termine[0].contrario[2], "onorato");
strcpy(termine[0].contrario[3], "elevato");
strcpy(termine[0].contrario[4], "sollevato");

/* lettera B*/
strcpy(termine[1].parola[0], "buffone");
strcpy(termine[1].contrario[0], "musone");
strcpy(termine[1].contrario[1], "scorbutico");
strcpy(termine[1].contrario[2], "brontolone");
strcpy(termine[1].contrario[3], "bisbetico");
strcpy(termine[1].contrario[4], "");

/* lettera C*/
strcpy(termine[2].parola[0], "capito");
strcpy(termine[2].contrario[0], "frainteso");
strcpy(termine[2].contrario[1], "travisato");
strcpy(termine[2].contrario[2], "stravolto");
strcpy(termine[2].contrario[3], "litigato");
strcpy(termine[2].contrario[4], "incompreso");

/* lettera D*/
strcpy(termine[3].parola[0], "debole");
strcpy(termine[3].contrario[0], "forte");
strcpy(termine[3].contrario[1], "potente");
strcpy(termine[3].contrario[2], "deciso");
strcpy(termine[3].contrario[3], "sicuro");
strcpy(termine[3].contrario[4], "persuasivo");

/* lettera E*/
strcpy(termine[4].parola[0], "enfasi");
strcpy(termine[4].contrario[0], "controllo");
strcpy(termine[4].contrario[1], "pacatezza");
strcpy(termine[4].contrario[2], "equilibrio");
strcpy(termine[4].contrario[3], "sobriet?");
strcpy(termine[4].contrario[4], "moderazione");

/*lettera F*/
strcpy(termine[5].parola[0], "finito");
strcpy(termine[5].contrario[0], "iniziato");
strcpy(termine[5].contrario[1], "avviato");
strcpy(termine[5].contrario[2], "incompleto");
strcpy(termine[5].contrario[3], "");
strcpy(termine[5].contrario[4], "");

/* lettera G*/
strcpy(termine[6].parola[0], "grave");
strcpy(termine[6].contrario[0], "leggero");
strcpy(termine[6].contrario[1], "facile");
strcpy(termine[6].contrario[2], "gradevole");
strcpy(termine[6].contrario[3], "divertente");
strcpy(termine[6].contrario[4], "acuto");

/* lettera H*/
strcpy(termine[7].parola[0], "hardware");
strcpy(termine[7].contrario[0], "software");
strcpy(termine[7].contrario[1], "programma");
strcpy(termine[7].contrario[2], "programmi");
strcpy(termine[7].contrario[3], "");
strcpy(termine[7].contrario[4], "");

/* lettera I*/
strcpy(termine[8].parola[0], "illecito");
strcpy(termine[8].contrario[0], "permesso");
strcpy(termine[8].contrario[1], "consentito");
strcpy(termine[8].contrario[2], "morale");
strcpy(termine[8].contrario[3], "ammissibile");
strcpy(termine[8].contrario[4], "lecito");

/* lettera L*/
strcpy(termine[9].parola[0], "libero");
strcpy(termine[9].contrario[0], "legato");
strcpy(termine[9].contrario[1], "obbligato");
strcpy(termine[9].contrario[2], "occupato");
strcpy(termine[9].contrario[3], "impegnato");
strcpy(termine[9].contrario[4], "condizionato");

/* lettera M*/
strcpy(termine[10].parola[0], "maestro");
strcpy(termine[10].contrario[0], "alunno");
strcpy(termine[10].contrario[1], "scolaro");
strcpy(termine[10].contrario[2], "allievo");
strcpy(termine[10].contrario[3], "inesperto");
strcpy(termine[10].contrario[4], "apprendista");

/* lettera N*/
strcpy(termine[11].parola[0], "normale");
strcpy(termine[11].contrario[0], "raro");
strcpy(termine[11].contrario[1], "irregolare");
strcpy(termine[11].contrario[2], "particolare");
strcpy(termine[11].contrario[3], "illogico");
strcpy(termine[11].contrario[4], "eccessivo");

/* lettera O*/
strcpy(termine[12].parola[0], "oscuro");
strcpy(termine[12].contrario[0], "chiaro");
strcpy(termine[12].contrario[1], "comprensibile");
strcpy(termine[12].contrario[2], "certo");
strcpy(termine[12].contrario[3], "luminoso");
strcpy(termine[12].contrario[4], "limpido");

/* lettera P*/
strcpy(termine[13].parola[0], "permesso");
strcpy(termine[13].contrario[0], "divieto");
strcpy(termine[13].contrario[1], "proibito");
strcpy(termine[13].contrario[2], "negato");
strcpy(termine[13].contrario[3], "ostacolato");
strcpy(termine[13].contrario[4], "inibito");

/* lettera Q*/
strcpy(termine[14].parola[0], "quiete");
strcpy(termine[14].contrario[0], "agitazione");
strcpy(termine[14].contrario[1], "preoccupazione");
strcpy(termine[14].contrario[2], "tensione");
strcpy(termine[14].contrario[3], "");
strcpy(termine[14].contrario[4], "");

/* lettera R*/
strcpy(termine[15].parola[0], "rotto");
strcpy(termine[15].contrario[0], "riparato");
strcpy(termine[15].contrario[1], "sistemato");
strcpy(termine[15].contrario[2], "aggiustato");
strcpy(termine[15].contrario[3], "");
strcpy(termine[15].contrario[4], "");

/* lettera S*/
strcpy(termine[16].parola[0], "spento");
strcpy(termine[16].contrario[0], "acceso");
strcpy(termine[16].contrario[1], "illuminato");
strcpy(termine[16].contrario[2], "avviato");
strcpy(termine[16].contrario[3], "vivace");
strcpy(termine[16].contrario[4], "riacceso");

/* lettera T*/
strcpy(termine[17].parola[0], "tragico");
strcpy(termine[17].contrario[0], "comico");
strcpy(termine[17].contrario[1], "farsesco");
strcpy(termine[17].contrario[2], "umoristico");
strcpy(termine[17].contrario[3], "leggero");
strcpy(termine[17].contrario[4], "ridicolo");

/* lettera U*/
strcpy(termine[18].parola[0], "ultimo");
strcpy(termine[18].contrario[0], "primo");
strcpy(termine[18].contrario[1], "vicino");
strcpy(termine[18].contrario[2], "iniziale");
strcpy(termine[18].contrario[3], "superato");
strcpy(termine[18].contrario[4], "vecchio");

/* lettera V*/
strcpy(termine[19].parola[0], "vuoto");
strcpy(termine[19].contrario[0], "pieno");
strcpy(termine[19].contrario[1], "carico");
strcpy(termine[19].contrario[2], "abbondante");
strcpy(termine[19].contrario[3], "ricaricato");
strcpy(termine[19].contrario[4], "occupato");

/* lettera Z*/
strcpy(termine[20].parola[0], "zeppo");
strcpy(termine[20].contrario[0], "vuoto");
strcpy(termine[20].contrario[1], "privo");
strcpy(termine[20].contrario[2], "scarico");
strcpy(termine[20].contrario[3], "disabitato");
strcpy(termine[20].contrario[4], "deserto");


                                             /*Qui inizia l'interazione del programma con l'utente*/
printf("++++++++++++++++++++++++++++++++++++++++++++\n");
printf("+                                          +\n");
printf("+ Benvenuto nel dizionario dei contrari    +\n");                                   //Copertina del dizionario
printf("+                                          +\n");
printf("++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
printf("\n\n\t\t\t   Inserisci una frase  :\n\n");

      gets(frase);  /*Viene utilizzata per prendere la frase scritta dall'utente e salvarla nell' array char frase */

      strlwr(frase);                       /*La frase viene portata a caratteri minuscoli grazie
                                                  alla function "strlwr" della libreria <string.h>*/

      parola = strtok(frase, separatori);  /*Tramite la function "strtok" della libreria <string.h>,la
                                                                 prima parola estratta viene salvata nella variabile "parola"*/

      i = indice(parola);                 /*Qui abbiamo la chiamata alla function "indice" dichiarata prima del main, questa function
                                                        ci ritorner? l'indice del primo carattere della parola. */

	if (strcmp(parola, termine[i].parola[0])==0){              /*Usiamo il costrutto di controllo if, dove viene
                                                                                                usata la function "strcmp" della libreria <string.h>, per confrontare
                                                                                                la parola estratta e il vocabolo inerente la sua prima lettera.
	                                                                                             Se "strcmp" ? uguale a 0, vuol dire che la parola estratta ? presente nel
                                                                                                 dizionario e vengono eseguite le seguenti istruzioni: */
     printf("\nLa parola \"%s\" e' presente  nel dizionario.\n", parola);
     printf("\nE' possibile  sostituirla con i seguenti contrari: \n");
        for (j=0; j<5; j++)                                                       //Questo ciclio iterativo (for), mostra le varie scelte possibili
		{		                                                                            //all'utente, cio? con quale contrario vuole sostituire la parola
            x=j+1;	                                                                //estrata dalla frase. L'utente pu? selezionare un contrario che va da 1 a 5,
			printf("%d  %s\n", x,termine[i].contrario[j]);  //oppure scegliendo di non voler sostituire la parola inserendo il valore 0.
		}

			 printf("\nSelezionare il contrario con il quale si desidera sostituire la parola \%s\ .", parola);
			 printf("\nSe invece non la si vuole sostituire, inserisci il numero 0 :");

                 scanf("\n%d", &x);         /* la selezione dell'utente viene presa ed
                                                          e' salvata nella variabile "x"*/
		if (x>=1 && x<=5)
		{                                       /*Se il valore, inserito dall'utente ? compreso tra 1 e 5, vengono eseguite le seguenti isruzioni*/

             x--;
                                         /*La variabile "x" viene decrementata, perch? in realt?
					                     le parola sono disposte nel vocabolario in uno shape che va da 0 a 4.*/

           strcpy(frasefinale, termine[i].contrario[x]);      /*Con la function "strcpy" della libreria <string.h>. Viene salvato
                                                                                               nella varibile "frasefinale" il contrario scelto*/
        }
    }
		else if (x==0)
        {                                        /*Se l'utente decide di non voler sostituire la parola
                                                con il suo contrario, vengono eseguite queste istruzioni : */

           strcpy(frasefinale, parola);            /* La function strcpy della libreria <string.h>. Salva nella
                                                                         variabile "frasefinale" la parola estratta dalla frase.*/
		   printf("La parola \"%s\" non verra' sostituita...\n",parola);
        }
	else
        {
                             /*Nel caso in cui, invece, la function "strcmp", nell'if precedente,
                               da come risultato maggiore o minore di 0.Quindi vuol dire che la parola
	                          estratta non ? presente nel vocabolario,allora si esegue la seguente istruzione: */

	strcpy(frasefinale, parola);        /*La function strcpy della libreria <string.h> copia la parola estretta
                                                               direttamente nella variabile "frasefinale". */
    }


	while((parola=strtok('\0', separatori)) != '\0')     /*Questo ciclo (while), esegue le stesse operazioni precedentemente
                                                                                          citate, solo che ora si considerano le parole che vengono dopo la prima.
                                                                                          Esso termina quando la variabile "parola" ? uguale al terminatore di stringa*/
	{

	i=indice(parola);                         /*Un' altra chiamata alla function "indice". */

	if ((strcmp(parola, termine[i].parola[0]))==0)              /*Avviene un confronto della parola estratta con le parole del vocabolario con la function "strcmp"*/

    {                     /*Se la parola estratta ? presente nel dizionario, vengono eseguite le seguenti istruzioni:*/

                 printf("\nLa parola \"%s\" e' presente nel dizionario dei contrari! .\n", parola);
                 printf("\nE' possibile sostituirla con i seguenti contrari: \n");

                 for (j=0; j<5; j++)  /*Con questo ciclo for si  visualizzano tutte le possibili scelte*/
				 {
					 x=j+1;
					 printf("%d  %s\n", x,termine[i].contrario[j]);
                 }
				 printf("\nSelezionare il contrario che si desidera sostituire alla parola \%s\. ", parola);
			     printf("\nSe non hai intenzione di sostituirla, inserire il numero 0:\n");

				 scanf("%d", &x);

				    if (x>=1 && x<=5)         // Se il valore inserito dall'utente ? compreso tra 0 e 5 vengono eseguite queste istruzioni:
					{
                x--;                                         //La variabile x viene decrementata poich? lo shape va da 0 a 4.

                printf("\nLa parola \"%s\" verra' sostituita dal suo contrario \"%s\"\n\n", parola, termine[i].contrario[x]);
				strncat(frasefinale, spazio, 1);       //Usiamo la function "strncat" della libreria <string.h> per porte concatenare
				                                                           //uno spazio tra una parola e l'altra.

				strcat(frasefinale, termine[i].contrario[x]);      /*Successivamente viene usata di nuovo la "strcat" per concatenare
                                                                                                il contrario nella varibile "frasefinale" per formare la nuova frase*/

					}
				 	else if (x==0)             /*Se invece l'utente sceglie 0. Vengono eseguite le seguenti istruzioni: */
					{
				strncat(frasefinale, spazio, 1);     /*Usiamo di nuovo la function "strncat" per poter inserire
				                                                           uno spazio tra una parola e l'altra. */

			    strcat(frasefinale, parola);    /*Successivamente viene usata di nuovo la "strcat" per concatenare
                                                                   la parola estratta, nella varibile "frasefinale". */
				printf("\nLa parola \"%s\" non subira'  modifiche....\n",parola);

					}
	}/*Se la parola non ? presente sul dizionario, vengono eseguite queste istruzioni : */
	else
	{
	strncat(frasefinale, spazio, 1);  /* Viene inserito uno spazio tra una parola e l'altra*/
	strcat(frasefinale, parola);             /*concatena il contrario della parola sostituita con la frase */
	}
 	}

{
    /* Visualizzazione della nuova frase*/
printf("\n\n\t\t\t     Ecco la nuova frase : \n\n");
puts(frasefinale);                /*Viene usato puts per stampare la nuova frase*/
printf("\n\n\n");
}
system("PAUSE");
return 0;

}
