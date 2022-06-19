#include "chess.h"
#include "figures.h"

void display(){
  char** two = join(whiteSquare, reverse(whiteSquare));
  interpreter(two);
}
