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

Empleado::Empleado(const string &empleado, int iD, int annoExp, float salarioBase, bool banderaRev) : empleado(
        empleado), iD(iD), annoExp(annoExp), salarioBase(salarioBase), banderaRev(banderaRev) {}


const string &Empleado::getEmpleado() const {
    return empleado;
}

void Empleado::setEmpleado(const string &empleado) {
    Empleado::empleado = empleado;
}

int Empleado::getId() const {
    return iD;
}

void Empleado::setId(int iD) {
    Empleado::iD = iD;
}

int Empleado::getAnnoExp() const {
    return annoExp;
}

void Empleado::setAnnoExp(int annoExp) {
    Empleado::annoExp = annoExp;
}

float Empleado::getSalarioBase() const {
    return salarioBase;
}

void Empleado::setSalarioBase(float salarioBase) {
    Empleado::salarioBase = salarioBase;
}

bool Empleado::isBanderaRev() const {
    return banderaRev;
}

void Empleado::setBanderaRev(bool banderaRev) {
    Empleado::banderaRev = banderaRev;
}

float Empleado::aumentoSalario(int *exp) {

    float suma;
    float salario = salarioBase;
    if(*exp == 1)
        suma = salario +(salario * 0.02);
    if(*exp == 2)
        suma = salario + (salario * 0.04);
    else
        suma = salario + (salario *((0, 05 * *exp)));

}

void Empleado::revision(bool *banderaRev) {

    int revision;
    revision = rand() % (1);
    if (revision == 1)
        *banderaRev = true;
    else
        *banderaRev = false;
}

string Empleado::reporteEmpleado(float *, bool *) {
    return std::__cxx11::string();
}




