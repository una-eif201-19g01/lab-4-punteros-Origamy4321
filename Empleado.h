/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;


class Empleado {
private:

protected:
    string empleado;
    int iD;
    int annoExp;
    float salarioBase;
    bool banderaRev;
public:

    Empleado();

    Empleado(const string &empleado, int iD, int annoExp, float salarioBase, bool banderaRev);

    const string &getEmpleado() const;

    void setEmpleado(const string &empleado);

    int getId() const;

    void setId(int iD);

    int getAnnoExp() const;

    void setAnnoExp(int annoExp);

    float getSalarioBase() const;

    void setSalarioBase(float salarioBase);

    bool isBanderaRev() const;

    void setBanderaRev(bool banderaRev);

    float aumentoSalario(int *);

    void revision(bool *);

    string reporteEmpleado(float *, bool *);
};


#endif //EMPLEADOPUNTEROS_EMPLEADO_H
