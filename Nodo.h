#pragma once
#ifndef NODO_LIB
#define NODO_LIB
#include "Coche.h"
class Nodo
{
private:
    /* data */
    Coche *datos;
    Nodo *puntero;

public:
    Nodo(/* args */);
    Nodo(Coche *coche);
    ~Nodo();
    bool setDatos(Coche coche);
    Nodo *setNextNodo(Nodo *nodo);
    Coche *getDatos();
    Nodo *getNextNodo();
};

Nodo::Nodo(/* args */)
{
    this->datos = NULL;
    this->puntero = NULL;
}
Nodo::Nodo(Coche *coche){
    this->datos = coche;
    std::cout << "new nodo *coche"<<std::endl;
}
Nodo::~Nodo()
{
    if (datos)
    {
        delete datos;
    }
    if (puntero)
    {
        delete puntero;
    }
}
bool Nodo::setDatos(Coche coche)
{
    if (!this->datos)
    {
        this->datos = new Coche();
    }
    *datos = coche;
    return true;
}
Nodo *Nodo::setNextNodo(Nodo *nodo)
{
    if (!this->puntero)
    {
        this->puntero = new Nodo();
        *this->puntero = *nodo;
        return this->puntero;
    }
    return NULL;
}
Coche *Nodo::getDatos()
{
    if (!this->datos)
    {
        return NULL;
    }
    return this->datos;
}
Nodo *Nodo::getNextNodo()
{
    return this->puntero;
}
#endif