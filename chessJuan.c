#include <stdio.h>

char** flipV(char** figura){
    int main(){
    char** figura = king;
    int alto = 0;
    int ancho = 0;
    char** altoAux = figura;
    char* anchoAux = *figura;
    while (*altoAux){altoAux++; alto++;}
    while (*anchoAux){anchoAux++; ancho++;}
    char nuevo[alto][ancho];
    int altoFijo = alto;

    while (*figura)
    {
        nuevo[alto] = *figura;
        figura++;
        alto--;
    }
    
    
    while (altoFijo <= 0 )
    {
            printf("%s\n",*nuevo);
        
       altoFijo--;
    }
    
}
}
char** flipH(char** figura){
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
}
char** superImpose(char** figura1, char** figura2){
    int main(){
    char** figura = king;
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
}