/*
Trabajas en una empresa de logística y debes gestionar los paquetes que llegan
y se entregan a través de un sistema. Cada paquete tiene un número de seguimiento único.
Tu sistema debe permitir la entrada de nuevos paquetes, la entrega (eliminación) de
paquetes, y la verificación de los que siguen en tránsito.

● Tarea: Inserta los paquetes con los números de seguimiento: 1001, 5002, 3003,
2004, 4500, 7005, 8006.

● Desafío: Los paquetes con los números de seguimiento 2004 y 4500 fueron
entregados, así que elimínalos. Luego, un nuevo paquete con el número 3500 llega
al sistema. Verifica si el paquete con el número 1001 sigue en tránsito e imprime la
lista de paquetes restantes

*/

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main()
{
  ArbolBinario<int> paquete;

  paquete.put(1001);
  paquete.put(5002);
  paquete.put(3003);
  paquete.put(2004);
  paquete.put(4500);
  paquete.put(7005);
  paquete.put(8006);

  cout << " Arbol de direccion de los paquetes: " << endl;

  paquete.print();

  paquete.remove(2004);
  paquete.remove(4500);
  paquete.put(3500);

  cout << " Arbol de direccion de los paquetes actualizados: " << endl;

  paquete.print();
  try
  {
    int pago = paquete.search(1001);
    cout << " El paquete con ID 1001 " << pago << endl;
  }
  catch (int e)
  {
    if (e == 404)
    {
      cout << " El paquete con ID 1001 no se encuentra en el sistema... " << endl;
    }
  }
  return 0;
}