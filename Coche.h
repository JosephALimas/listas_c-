#pragma once
#ifndef COCHE_LIB
#define COCHE_LIB
#include <iostream>
class Coche
{
private:
    /* data */
    std::string marca;
    std::string modelo;
    std::string fechaFabricacion;
    short llantas;
    short puertas;

public:
    Coche(/* args */);
    Coche(const Coche &coche);
    Coche(std::string marca, std::string modelo, std::string fecha, short llantas, short puertas);
    ~Coche();
    bool setMarca(std::string marca);
    bool setModelo(std::string modelo);
    bool setFecha(std::string fecha);
    bool setLlantas(short llantas);
    bool setPuertas(short puertas);
    //
    std::string getMarca();
    std::string getModelo();
    std::string getFecha();
    short getLlantas();
    short getPuertas();
};

Coche::Coche(/* args */)
{
    this->marca = "";
    this->modelo = "";
    this->fechaFabricacion = "";
    this->llantas = -1;
    this->puertas = -1;
}
Coche::Coche(const Coche &coche){
    this->marca = coche.marca;
    this->modelo = coche.modelo;
    this->fechaFabricacion = coche.fechaFabricacion;
    this->llantas = coche.llantas;
    this->puertas = coche.puertas;
}
Coche::Coche(std::string marca, std::string modelo, std::string fecha, short llantas, short puertas)
{
    this->marca = marca;
    this->modelo = modelo;
    this->fechaFabricacion = fecha;
    this->llantas = llantas;
    this->puertas = puertas;
}
Coche::~Coche()
{
}
bool Coche::setMarca(std::string marca)
{
    this->marca = marca;
    return true;
}
bool Coche::setModelo(std::string modelo)
{
    this->modelo = modelo;
    return true;
}
bool Coche::setFecha(std::string fecha)
{
    this->fechaFabricacion = fecha;
    return true;
}
bool Coche::setLlantas(short llantas) {
    if(llantas < 0){
        return false;
    }
    this->llantas = llantas;
    return true;
}
bool Coche::setPuertas(short puertas) {
    if(puertas<0){
        return false;
    }
    this->puertas = puertas;
    return true;
}
//
std::string Coche::getMarca() {
    return this->marca;
}
std::string Coche::getModelo() {
    return this->modelo;
}
std::string Coche::getFecha() {
    return this->fechaFabricacion;
}
short Coche::getLlantas() {
    return this->llantas;
}
short Coche::getPuertas() {
    return this->puertas;
}
#endif