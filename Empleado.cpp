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

const int NUMERO_MAXIMO = 100;


Empleado::Empleado() {

    iD = std::rand() % NUMERO_MAXIMO;
}

Empleado::Empleado(const string &empleado, int annoExp, float salarioBase) : empleado(empleado), annoExp(annoExp),
                                                                             salarioBase(salarioBase) {

    iD = std::rand() % NUMERO_MAXIMO;

}


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

bool Empleado::getBanderaRev()  {
    return banderaRev;
}

void Empleado::setBanderaRev(bool banderaRev) {
    Empleado::banderaRev = banderaRev;
}

float Empleado::aumentoSalario(int *exp) {

    float suma = 0;
    float salario = salarioBase;
    if (*exp == 1)
        suma = salario + (salario * 0.02);
    if (*exp == 2)
        suma = salario + (salario * 0.04);
    else
        if(*exp >= 3)
        suma = salario + (salario * (0.05* *exp));

    return suma;
}

void Empleado::revision(bool *banderaRev) {


    if (rand() % 2 == 0)
        *banderaRev = true;
    else
        *banderaRev = false;

    setBanderaRev(*banderaRev);
}

string Empleado::reporteEmpleado() {

    string reporte = "";

    string cambio;

    if (getBanderaRev() == false) {
        cambio = "NO";
    } else { cambio = "SI"; }

    reporte = "Empleado # [ " + to_string(getId()) + "]\n\tNombre [" + getEmpleado() + "]\n\tAños de experiencia [" +
              to_string(getAnnoExp()) + "]\n\tSalario Inicial [" + to_string(getSalarioBase()) +
              "]\n\tSalario Acumulado [" + to_string(aumentoSalario(&annoExp)) + "]\n\tNecesita revision [" +
              cambio + "]\n\"";

    return reporte;
}




