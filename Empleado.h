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

    void revision(bool *);

    float aumentoSalario(int *);

protected:
    string empleado;
    int iD;
    int annoExp;
    float salarioBase;
    bool banderaRev;
public:

    Empleado();

//nota bandera e iD no entran al constructor

    Empleado(const string &empleado, int annoExp, float salarioBase );

    const string &getEmpleado() const;

    void setEmpleado(const string &empleado);

    int getId() const;

    void setId(int iD);

    int getAnnoExp() const;

    void setAnnoExp(int annoExp);

    float getSalarioBase() const;

    void setSalarioBase(float salarioBase);

    bool getBanderaRev() ;

    void setBanderaRev(bool banderaRev);

    string reporteEmpleado();
};


#endif //EMPLEADOPUNTEROS_EMPLEADO_H
