#include <iostream>
#include <stdio.h>
#include "Lista.h"

int main(int args, const char *argv[])
{
    Lista *lista = new Lista();
    lista->imprimeLista();
    //
    Coche *cDato = new Coche("nissan", "GT", "22/09/2023", '4', '2');
    Nodo *newNodo = new Nodo(cDato);
    lista->insertarNodo(newNodo);
    //
    lista->insertarNodo(new Nodo(new Coche("toyota", "civic", "25/09/2023", '4', '2')));
    lista->insertarNodo(new Nodo(new Coche("ford", "bronco", "01/09/2023", '4', '4')));
    //
    int n;
    std::cout << "cantidad de elentos a insertar" << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::string marca, modelo, fecha;
        short llantas, puertas;
        std::cout << "Marca: ";
        std::cin >> marca;
        std::cout << "\tModelo: ";
        std::cin >> modelo;
        std::cout << "\tFecha: ";
        std::cin >> fecha;
        std::cout << "\tLlantas: ";
        std::cin >> llantas;
        std::cout << "\tPuertas: ";
        std::cin >> puertas;
        lista->insertarNodo(new Nodo(new Coche(marca,modelo,fecha,llantas,puertas)));
    }
    std::cout << "Dato encontrado:" << lista->buscarNodo("toyota")->getDatos()->getMarca() << std::endl;
    //
    lista->imprimeLista();
    return 0;
}