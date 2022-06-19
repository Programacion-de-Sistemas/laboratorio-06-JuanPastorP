#include "chess.h"
#include "figures.h"

void display(){
  char** TorreBlancaTableroNegro = superImpose(rook,reverse(whiteSquare));
  char** CaballoBlancoTableroBlanco = superImpose(knight,whiteSquare);
  char** AlfilBlancoTableroNegro = superImpose(bishop,reverse(whiteSquare));
  char** ReyBlancoTableroBlanco = superImpose(king,whiteSquare);
  char** ReinaBlancaTableroNegro = superImpose(queen,reverse(whiteSquare));
  char** AlfilBlancoTableroBlanco = superImpose(bishop,whiteSquare);
  char** CaballoBlancoTableroNegro = superImpose(knight,reverse(whiteSquare));
  char** TorreBlancaTableroBlanco = superImpose(rook,whiteSquare);
  char** dosPiezas = join(TorreBlancaTableroNegro, CaballoBlancoTableroBlanco);
  char** tresPiezas = join(dosPiezas, AlfilBlancoTableroNegro);
  char** cuatroPiezas = join(tresPiezas, ReyBlancoTableroBlanco);
  char** cincoPiezas = join(cuatroPiezas, ReinaBlancaTableroNegro);
  char** seisPiezas = join(cincoPiezas, AlfilBlancoTableroBlanco);
  char** sietePiezas = join(seisPiezas, CaballoBlancoTableroNegro);
  char** ochoPiezas = join(sietePiezas, TorreBlancaTableroBlanco);

  /*  
  char** dos = join(whiteSquare, reverse(whiteSquare));
  char** cuatro = join(dos, dos);
  char** ocho = join(cuatro, cuatro);
  char** dosFilas = up(ocho, flipV(ocho));
  char** cuatroFilas = up(dosFilas, dosFilas);
  char** piezas =join(join(join(join(join(join(join(rook, knight),bishop),king),queen),bishop),knight),rook);
  char** piezasTablero = superImpose(piezas, ocho);*/
  interpreter(ochoPiezas);
}
