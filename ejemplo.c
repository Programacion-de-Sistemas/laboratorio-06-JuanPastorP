#include "chess.h"
#include "figures.h"

void display(){
  char** dos = join(whiteSquare, reverse(whiteSquare));
  char** cuatro = join(dos, dos);
  char** ocho = join(cuatro, cuatro);
  char** dosFilas = up(ocho, flipV(ocho));
  char** cuatroFilas = up(dosFilas, dosFilas);
  interpreter(cuatroFilas);
}
