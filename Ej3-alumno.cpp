/*
Estás diseñando un sistema de inscripción para un gimnasio, donde cada socio
tiene un número de socio único. El sistema debe permitir la inscripción de nuevos socios, la
eliminación de socios que se dan de baja, y la búsqueda de socios activos.

● Tarea: Inscribe a los socios con los siguientes números de socio: 500, 250, 750, 100,
300, 600, 800.

● Desafío: Un socio con el número 250 se da de baja, así que elimínalo. Luego,
verifica si los socios con los números 300 y 750 aún están activos. Imprime la lista
de socios actualizada.
*/

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main()
{
  ArbolBinario<int> socio;

  socio.put(500);
  socio.put(250);
  socio.put(750);
  socio.put(100);
  socio.put(300);
  socio.put(600);
  socio.put(800);

  cout << " Lista original " << endl;
  socio.print();

  socio.remove(250);

  try
  {
    int id = socio.search(300);

    cout << " El socio con ID 300 esta inscripto: " << id << endl;
  }
  catch (int e)
  {
    if (e == 404)
    {
      cout << " El socio con la ID 300 no existe.. " << endl;
    }
  }

  try
  {
    int id = socio.search(750);

    cout << " El socio con ID 750 esta inscripto: " << id << endl;
  }
  catch (int a)
  {
    if (a == 404)
    {
      cout << " El socio con la ID 750 no existe.. " << endl;
    }
  }

  cout << " lista actualizada: " << endl;
  socio.print();

  return 0;
}