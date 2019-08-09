//
// Created by Dylan Molina  on 2019-08-08.
//
//Usar FIND, substrg()
#include <iostream>
#include "CalculoPrestamo.h"



    float CalculoPrestamo::monto;

    float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {
        
    }

    int CalculoPrestamo::calcularTiempoEnMeses(std::string tiempoTXT) {

    }

    float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {

    }


   CalculoPrestamo::CalculoPrestamo() {
        monto = 0;
    }

    CalculoPrestamo::CalculoPrestamo(int64_t mont) {
        monto = mont;
    }

    float CalculoPrestamo::getMonto() {
        return monto;
    }

    void CalculoPrestamo::setMonto(float mont) {
        monto = mont;
    }
    //std::string reporte= reporte + "texto\n texto\n"
    
    std::string CalculoPrestamo::reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT) {

    

