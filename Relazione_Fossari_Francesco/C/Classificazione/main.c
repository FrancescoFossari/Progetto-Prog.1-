#include "header.h"  //INCLUSIONE DEL FILE HEADER.H

int main () {
    //DICHIARAZIONI DELLE VARIABILI
    int i,j;
    int dim=30;
    int scacchiera[dim][dim];
    srand(time(NULL));
    int x1, x2, y1, y2;

    //POPOLAMENTO SCACCHIERA
    int maxOggetti = numOggetti;
    for (i = 0; i < dim; i++)
        for (j = 0; j < dim; j++)
            scacchiera[i][j] = 0;
    while (maxOggetti > 0) {
        for (i = 0; i<dim; i++)
            for (j = 0; j<dim; j++)
                if ((scacchiera[i][j] != 1) && (maxOggetti > 0) && (rand() % 1000 == 0)) {
                        scacchiera[i][j] = 1;
                        maxOggetti -= 1;
                    } }
//INSERIMENTO DEL CENTRO1 NELLA MATRICE
do{i=rand()%30;
      j=rand()%30;
}while(scacchiera[i][j]==1);
scacchiera[i][j]=2;
x1 = i;
y1 = j;

//INSERIMENTO DEL CENTRO2 NELLA MATRICE
do{i=rand()%30;
      j=rand()%30;
}while(scacchiera[i][j]==1 && scacchiera[i][j] == 2);
scacchiera[i][j]=3;
x2 = i;
y2 = j;

for(int i=0; i<dim; i++)
{
    for(int j=0; j<dim; j++)
    {
        if(scacchiera[i][j] == 1)   //PRINTA LA MATRICE CON TUTTE LE X CASUALI, IL CENTRO1 E IL CENTRO2.
            printf("[X]");
        if(scacchiera[i][j] == 2)
            printf("[1]");
        if(scacchiera[i][j] == 3)
            printf("[2]");
        if(scacchiera[i][j] != 1 && scacchiera[i][j] != 2 && scacchiera[i][j] != 3)
            printf("[ ]");
    }
    printf("\n");
}
printf("\n\n\n\n\n\n");
int x, y;
int matA[dim*dim][2], matB[dim*dim][2];  //DICHIARO UNA NUOVA MATRICE DOVE INSERIRE I 2 INSIEMI
int counterA = 0;                                             //RISPETTIVAMENTE INSIEME A e  INSIEME B
int counterB = 0;
double distanza1, distanza2;
for(int i=0; i<dim; i++)
{
    for(int j=0; j<dim; j++)
    {
        if(scacchiera[i][j] == 1)
        {
            //CALCOLO DELLA DISTANZA DAL CENTRO1
            x = i-x1;
            y = j-y1;
            distanza1 = sqrt((double)(x*x+y*y));
            //CALCOLO DELLA DISTANZA DAL CENTRO2
            x = i-x2;
            y = j-y2;
            distanza2 = sqrt((double)(x*x+y*y));
            if(distanza1 < distanza2){
                printf("[A]");
                matA[counterA][0] = i;
                matA[counterA][1] = j;  //INSERISCE IN UNA NUOVA MATRICE TUTTE LE X PIU VICINE AL CENTRO1
                counterA++;
            }
            else if(distanza2 == distanza1)
                printf("[U]");                                        //SE LE DISTANZE DELLE X SONO UGUALI, VENGONO PRINTATE COME "U"
            else if(distanza2 < distanza1){
                printf("[B]");                                       //SE LA DISTANZA DI UNA X DAL CENTRO2 ? MINORE RISPETTO AL CENTRO1
                matB[counterB][0] = i;                     //VIENE PRINTATA COME "B"
                matB[counterB][1] = j;                        //INSERISCE IN UNA NUOVA MATRICE TUTTE LE X PIU VICINE AL CENTRO2
                counterB++;
            }

        }
        if(scacchiera[i][j] == 2)
            printf("[1]");
        if(scacchiera[i][j] == 3)             //PRINTA NUOVAMENTE GLI SPAZI VUOTI CON CENTRO1 E CENTRO2
            printf("[2]");
        if(scacchiera[i][j] != 3 && scacchiera[i][j] != 1 && scacchiera[i][j] != 2)
            printf("[ ]");
    }
    printf("\n");
}
printf("\n\tPosizioni delle X appartenenti all' insieme A:\n");
for(i=0;i<counterA;i++){                                      //PRINTA TUTTE LE POSIZIONI DELLE X PIU VICINE AL CENTRO1 RISPETTO AL CENTRO2
 printf("\t[%d,%d]\n",matA[i][0],matA[i][1]);
}
printf("\n\tPosizioni delle X appartenenti all' insieme B :\n");
for(i=0;i<counterB;i++){                                       //PRINTA TUTTE LE POSIZIONI DELLE X PIU VICINE AL CENTRO2 RISPETTO AL CENTRO1
    printf("\t[%d,%d]\n",matB[i][0],matB[i][1]);
}
printf("\n\n\n");
}

