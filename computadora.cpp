#include"computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &nombre_E,const string &sistema_O,const string &procesador_N,int ram)
{
    this->nombre_E = nombre_E;
    this->sistema_O = sistema_O;
    this->procesador_N = procesador_N;
    this->ram = ram;
}

void Computadora::setNombre_E(const string &v){

    nombre_E = v;
}
string Computadora::getNombre_E(){

    return nombre_E;
}
void Computadora::setSistema_O(const string &v){

    sistema_O = v;
}
string Computadora::getSistema_O(){

    return sistema_O;
}
void Computadora::setProcesador_N(const string &v){

    procesador_N = v;
}
string Computadora::getProcesador_N(){

    return procesador_N;
}
void Computadora::setRam(int v){

    ram = v;
}
int Computadora::getRam(){

    return ram;
}