
//
// Filename:  CalculoPrestamo.cpp
// Created by Dylan Molina  on 2019-08-08.
//
// Organization:  Universidad Nacional de Costa Rica
//

#include <iostream>
#include "CalculoPrestamo.h"

int main() {
    CalculoPrestamo calculoPrestamo(3000);

    std::string reporte;


    reporte = calculoPrestamo.reporteCalculoPrestamo("1A", "8.40%");

    std::cout << "Calcular Prestamo: "<< std::endl;
    std::cout << reporte << std::endl;

    return 0;
}