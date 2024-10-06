/* En una tienda de electrónica, cada producto tiene un código único y quieres
gestionar el inventario. A medida que entran y salen productos, es necesario mantener el
sistema actualizado.

● Tarea: Inserta los productos con los siguientes códigos: 4001, 2002, 6003, 1500,
3500, 5000, 7000.

● Desafío: Un cliente compró los productos con códigos 2002 y 6003, así que
elimínalos del sistema. Luego, un nuevo producto con el código 2500 llega al
inventario. Imprime el inventario actualizado y verifica si el código 4001 todavía está
en el sistema
*/

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main()
{
  ArbolBinario<int> producto;

  producto.put(4001);
  producto.put(2002);
  producto.put(6003);
  producto.put(1500);
  producto.put(3500);
  producto.put(5000);
  producto.put(7000);

  cout << " Arbol de stock, recien establecido.. " << endl;
  producto.print();

  producto.remove(2002);
  producto.remove(6003);
  producto.put(2500);

  cout << " Arbol de stock actualizado " << endl;
  producto.print();

  try
  {
    int elemento = producto.search(4005);
    cout << " El producto con ID 4005 esta en el inventario: " << elemento << endl;
  }
  catch (int e)
  {
    if (e == 404)
    {
      cout << " El producto con ID 4005 no se encuentra en el inventario... " << endl;
    }
  }

  return 0;
}