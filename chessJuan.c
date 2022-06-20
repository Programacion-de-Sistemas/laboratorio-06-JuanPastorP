#include <stdio.h>

char** flipV(char** figura){
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
    }
    
    
}

char** flipH(char** figura){
    int alto = 0;
    int ancho = 0;
    char** altoAux = figura;
    char* anchoAux = *figura;
    while (*altoAux){altoAux++; alto++;}
    while (*anchoAux){anchoAux++; ancho++;}
    char nuevo[alto][ancho];
    int anchoFijo = ancho; 

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
    
    
    while (altoFijo = 0 )
    {
            printf("%s\n",*nuevo);
        
       altoFijo--;
    }
    
}

char** superImpose(char** figura1, char** figura2){
    int alto = 0;
    int ancho = 0;
    char** altoAux = figura;
    char* anchoAux = *figura;
    while (*altoAux){altoAux++; alto++;}
    while (*anchoAux){anchoAux++; ancho++;}

    while (*figura1)
    {
        while(**figura1){
            if (**figura1 == " ")
            {
                **figura1 = **figura2;
            }

             *figura1++;
             *figura2++;
        }
        figura1++;
        figura2++;
    }
    
    
}

char** repeatH(char** figura1, char** figura2){
    int alto = 0;
    int ancho = 0;
    char** altoAux = figura;
    char* anchoAux = *figura;
    while (*altoAux){altoAux++; alto++;}
    while (*anchoAux){anchoAux++; ancho++;}
    char nuevo[alto][ancho*2];
    int aux1 = 0;
    int aux2 = 0;

    while (*figura1)
    {
        while(**figura1){
             nuevo[aux1][aux2] = **figura1;
             *figura1++;
             aux2++;
        }
        while(**figura2){
             nuevo[aux1][aux2] = **figura2;
             *figura2++;
             aux2++;
        }
        aux2=0;
        ancho = anchoFijo;
        figura1++;
        figura2++;
        aux1++;
    }
      
}

char** repeatV(char** figura1, char** figura2){
     int alto = 0;
    int ancho = 0;
    char** altoAux = figura1;
    char* anchoAux = *figura1;
    while (*altoAux){altoAux++; alto++;}
    while (*anchoAux){anchoAux++; ancho++;}
    char nuevo[alto*2][ancho];

    while (*figura1)
    {
        nuevo[alto] = *figura1;
        figura1++;
    }
    while (*figura2)
    {
        nuevo[alto] = *figura2;
        figura2++;
    }
    
      
}
