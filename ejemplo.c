#include "chess.h"
#include "figures.h"

void display(){
  char** dos = join(whiteSquare, reverse(whiteSquare));
  char** cuatro = join(dos, dos);
  char** ocho = join(cuatro, cuatro);
  interpreter(ocho);
}
