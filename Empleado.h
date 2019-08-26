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
    string *empleado;
    int *iD;
    int *annoExp;
    float *salarioBase;
    bool *banderaRev;
public:
    Empleado();

    Empleado(string *empleado, int *iD, int *annoExp, float *salarioBase, bool *banderaRev);

    string *getEmpleado() const;

    int *getId() const;

    int *getAnnoExp() const;

    float *getSalarioBase() const;

    bool *getBanderaRev() const;

    void setEmpleado(string *empleado);

    void setId(int *iD);

    void setAnnoExp(int *annoExp);

    void setSalarioBase(float *salarioBase);

    void setBanderaRev(bool *banderaRev);

    float aumentoSalario(float *);

    void revision(bool *);

    static string reporteEmpleado(float*, bool*);
};


#endif //EMPLEADOPUNTEROS_EMPLEADO_H
