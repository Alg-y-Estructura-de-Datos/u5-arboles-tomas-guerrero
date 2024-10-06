/*
Un restaurante tiene un sistema de reservas donde cada mesa tiene un número
específico. A medida que los clientes reservan o cancelan mesas, el sistema debe
mantenerse actualizado.

● Tarea: Agrega las reservas de las siguientes mesas: 15, 10, 20, 5, 12, 18, 25.

● Desafío: Dos clientes cancelaron sus reservas en las mesas 10 y 20, así que
elimínalas del sistema. Luego, un nuevo cliente reserva la mesa 13. Verifica si la
mesa 12 aún está reservada e imprime la lista actualizada de mesas reservadas.



*/

#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main()
{
  ArbolBinario<int> mesa;

  mesa.put(15);
  mesa.put(10);
  mesa.put(20);
  mesa.put(5);
  mesa.put(12);
  mesa.put(18);
  mesa.put(25);

  cout << " Lista de mesas original " << endl;
  mesa.print();

  mesa.remove(10);
  mesa.remove(20);
  mesa.put(13);

  cout << " Lista de mesas actualizadas " << endl;
  mesa.print();

  try
  {
    int numero = mesa.search(12);
    cout << " La mesa con ID 12 esta reservada " << numero << endl;
  }
  catch (int e)
  {
    if (e == 404)
    {
      cout << " La mesa con ID 12 no esta en el sistema... " << endl;
    }
  }
  return 0;
}