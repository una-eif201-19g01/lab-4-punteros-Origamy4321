#include <iostream>
#include "Empleado.h"

int main() {
    Empleado empleado[3];

    empleado[0].setEmpleado("Mike");
    empleado[0].setAnnoExp(2);
    empleado[0].setSalarioBase(1200000);


    empleado[1].setEmpleado("Sebastian");
    empleado[1].setAnnoExp(3);
    empleado[1].setSalarioBase(1600000);

    empleado[2].setEmpleado("Carolina");
    empleado[2].setAnnoExp(8);
    empleado[2].setSalarioBase(1800000);

    empleado[3].setEmpleado("Emma");
    empleado[3].setAnnoExp(1);
    empleado[3].setSalarioBase(800000);

    for (int con = 0; con < 4; con++) {
        cout << empleado[con].reporteEmpleado() << endl;
    }

    return 0;
}