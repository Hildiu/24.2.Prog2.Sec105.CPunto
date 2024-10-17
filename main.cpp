/*-----------------------------------------------------
 * DAto de Entrada:  x1, y1, x2, y2 (double)
 * Dato de Salida : distancia (double)
 -------------------------------------------------------*/

#include "CPunto.h"

int main()
{
  double x1, y1, x2, y2;

  cout << "Punto 1: \n";
  cout << "x1 : " ; cin >> x1;
  cout << "y1 : " ; cin >> y1;
  CPunto p1(x1,y1);
  cout << "Punto 2: \n";
  cout << "x2 : " ; cin >> x2;
  cout << "y2 : " ; cin >> y2;
  CPunto p2(x2,y2);

  cout << "La distancia es: " << p1.distancia(p2) << "\n";

  //----Usando objetos dinamicos
  cout << "\nUsamos dos objetos dinamicos\n";
  CPunto *pP1 = new CPunto(78.89,56.45);
  CPunto *pP2 = new CPunto(40.32, 100.0);
  cout << "La distancia es: " << pP1->distancia(*pP2  );
  delete pP1;
  pP1 = nullptr;
  delete pP2;
  pP2 = nullptr;

    return 0;
}
