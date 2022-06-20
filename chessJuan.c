#include <stdio.h>

char** flipV(char**){
   char** figura = king;
    int alto = 0;
    int ancho = 0;
    char** altoAux = figura;
    char* anchoAux = *figura;
    while (*altoAux){altoAux++; alto++;}
    while (*anchoAux){anchoAux++; ancho++;}
    char nuevo[alto][ancho];

    while (*figura)
    {
        nuevo[alto] = *figura;
        figura++;
        alto--;
    }
    
    
    while (*nuevo)
    {
            printf("%s\n",*nuevo);
        
        nuevo++;
    }
}