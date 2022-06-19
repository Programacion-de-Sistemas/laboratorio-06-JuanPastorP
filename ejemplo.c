#include "chess.h"
#include "figures.h"

void display(){
  char** dos = join(whiteSquare, reverse(whiteSquare));
  char** cuatro = join(dos, dos);
  char** ocho = join(cuatro, cuatro);
  char** dosFilas = up(ocho, flipV(ocho));
  char** cuatroFilas = up(dosFilas, dosFilas);
  char** piezas =join(join(join(join(join(join(join(rook, knight),bishop),king),queen),bishop),knight),rook);
  char** piezasTablero = superImpose(piezas, piezas);
  interpreter(piezasTablero);
}
