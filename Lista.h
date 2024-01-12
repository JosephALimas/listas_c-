#pragma once
#ifndef DRIVER_LIB
#define DRIVER_LIB
#include "Nodo.h"
#include <iostream>
class Lista
{
private:
    /* data */
    Nodo *start;
    Nodo *end;

public:
    Lista(/* args */);
    Lista(Nodo *start);
    ~Lista();
    // CRUD
    bool insertarNodo(Nodo *nodo);
    Nodo *buscarNodo(std::string marca);
    bool actulizarNodo(std::string marca, Nodo *nodo);
    bool eliminarNodo(std::string marca);
    void imprimeLista();
};

Lista::Lista(/* args */)
{
    this->start = NULL;
    this->end = NULL;
}
Lista::Lista(Nodo *start)
{
    if (!this->start)
    {
        this->start = new Nodo();
    }
    *this->start = *start;
}
Lista::~Lista()
{
    if (start)
    {
        delete start;
    }
    if (end)
    {
        delete end;
    }
}
bool Lista::insertarNodo(Nodo *nodo)
{
    std::cout << "Insert Nodo -> lista" << std::endl;
    if (!this->start)
    {
        this->start = new Nodo();
        this->end = this->start;
        *this->start = *nodo;
    }
    else
    {
        end = end->setNextNodo(nodo);
    }
    return true;
}
Nodo *Lista::buscarNodo(std::string marca)
{
    Nodo *temp;
    temp = start;
    do
    {
        if (temp->getDatos()->getMarca() == marca)
        {
            return (temp);
        }
    } while ((temp = temp->getNextNodo()));
    return NULL;
}
bool Lista::actulizarNodo(std::string marca, Nodo *nodo)
{
    Nodo *temp;
    temp = buscarNodo(marca);
    if (temp)
    {
        *temp = *nodo;
        return (true);
    }
    return (false);
}
void Lista::imprimeLista()
{
    Nodo *temp;
    temp = start;
    if (!temp)
    {
        std::cout << "Lista null" << std::endl;
        return;
    }
    do
    {
        Coche *cTemp;
        cTemp = temp->getDatos();
        std::cout << "Marca: " << cTemp->getMarca() << "\tModelo: " << cTemp->getModelo() << "\tFecha: " << cTemp->getFecha() << std::endl;
    } while ((temp = temp->getNextNodo()));
}
bool Lista::eliminarNodo(std::string marca)
{
    return (false);
}
#endif