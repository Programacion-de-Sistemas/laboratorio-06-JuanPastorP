#include <stdio.h>
#include <stdlib.h>
#include "figures.h"

int main(){
    char** figura = king;
    int alto = 0;
    int ancho = 0;
    char** altoAux = figura;
    char* anchoAux = *figura;
    while (*altoAux){altoAux++; alto++;}
    while (*anchoAux){anchoAux++; ancho++;}
    char nuevo[alto][ancho];
    int anchoFijo = ancho; 
    int altoFijo = alto;

    while (*figura)
    {
        while(**figura){
             nuevo[alto][ancho] = **figura;
             *figura++;
             ancho--;
        }
        ancho = anchoFijo;
        figura++;
        alto--;
    }
    
    
    while (altoFijo <= 0 )
    {
            printf("%s\n",*nuevo);
        
       altoFijo--;
    }
    
        

}