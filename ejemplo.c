#include "chess.h"
#include "figures.h"

void display(){

  char** dos = join(whiteSquare, reverse(whiteSquare));
  char** cuatro = join(dos, dos);
  char** ocho = join(cuatro, cuatro);
  char** dosFilas = up(ocho, flipV(ocho));

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
  char** PeonBlancoTableroBlanco = superImpose(pawn,whiteSquare);
  char** PeonBlancoTableroNegro = superImpose(pawn,reverse(whiteSquare));

  char** dosPiezasPeones = join(PeonBlancoTableroBlanco, PeonBlancoTableroNegro);
  char** cuatroPeones = join(dosPiezasPeones, dosPiezasPeones);
  char** ochoPeones = join(cuatroPeones, cuatroPeones);

  char** dosFilasPiezas = up(ochoPiezas, ochoPeones);
  char** dosFilasPiezasAbajo = up(ochoPeones, ochoPiezas);
  char** cuatroFilasPiezas = up(dosFilasPiezas, reverse(dosFilas));

  char** tableroLleno = up(up(cuatroFilasPiezas,reverse(dosFilas)),reverse(dosFilasPiezasAbajo));
  


  interpreter(reverse(ochoPiezas));
}
