#include "Empleado.h"

/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */







Empleado::Empleado() {}

Empleado::Empleado(string *empleado, int *iD, int *annoExp, float *salarioBase, bool *banderaRev) : empleado(
        empleado), iD(iD), annoExp(annoExp), salarioBase(salarioBase), banderaRev(banderaRev) {}

string *Empleado::getEmpleado() const {
    return empleado;
}

int *Empleado::getId() const {
    return iD;
}

int *Empleado::getAnnoExp() const {
    return annoExp;
}

float *Empleado::getSalarioBase() const {
    return salarioBase;
}

bool *Empleado::getBanderaRev() const {
    return banderaRev;
}

void Empleado::setEmpleado(string *empleado) {
    Empleado::empleado = empleado;
}

void Empleado::setId(int *iD) {
    Empleado::iD = iD;
}

void Empleado::setAnnoExp(int *annoExp) {
    Empleado::annoExp = annoExp;
}

void Empleado::setSalarioBase(float *salarioBase) {
    Empleado::salarioBase = salarioBase;
}

void Empleado::setBanderaRev(bool *banderaRev) {
    Empleado::banderaRev = banderaRev;
}

float Empleado::aumentoSalario(float *salario) {


    int aumento = reinterpret_cast<int>(annoExp);
    float cambio = 0.0;
    salario = salarioBase;
    float suma = 0;
    float convertir = 0;
    //convertir = (*float)aumento/100;
    //if (aumento < 3 && aumento > 0)

      //  suma = salarioBase + convertir;

    return 0;
}

void Empleado::revision(bool *banderaRev) {

    int revision;
    revision = rand()%(1);
    if(revision == 1)
        *banderaRev = true;
    else
        *banderaRev = false;

}

string Empleado::reporteEmpleado(float *, bool *) {
    return std::__cxx11::string();
}






