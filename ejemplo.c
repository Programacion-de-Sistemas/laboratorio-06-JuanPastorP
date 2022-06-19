#include "chess.h"
#include "figures.h"

void display(){
  char** cuatro = flipV(join(whiteSquare, reverse(whiteSquare)));
  interpreter(cuatro);
}
