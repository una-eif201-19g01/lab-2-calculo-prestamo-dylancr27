//
// Filename:  CalculoPrestamo.cpp
// Created by Dylan Molina  on 2019-08-08.
//
// Organization:  Universidad Nacional de Costa Rica
//
#include <iostream>
#include "CalculoPrestamo.h"



   

float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {
    float porcentaje = 0;
    int buscaPorcentaje = porcentajeTXT.find("%");

    if (buscaPorcentaje > 0) {
        porcentaje = std::stof(porcentajeTXT.substr(0, buscaPorcentaje));
        if (porcentaje > 0) {
            porcentaje = porcentaje / 100;
        }
    }
    return porcentaje;
}

int CalculoPrestamo::calcularTiempoEnMeses(std::string tiempoTXT) {
    int anio;
    int meses;
    int buscarAnio = tiempoTXT.find("A");
    int buscarMes = tiempoTXT.find("M");

    if (buscarAnio > 0) {
        anio = stoi(tiempoTXT.substr(0, buscarAnio));
        if (anio > 0) {
            meses = anio * 12;
        }
    } else if (buscarMes > 0) {
        meses = stoi(tiempoTXT.substr(0, buscarMes));
    }

}

    float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {
        return(balance*(tasaAnual/12)) ;
    }




   CalculoPrestamo::CalculoPrestamo() {
        monto = 0;
    }

    CalculoPrestamo::CalculoPrestamo(int64_t mont) {
        monto = mont;
    }

    float CalculoPrestamo:: getMonto() {
        return monto;
    }

    void CalculoPrestamo::setMonto(float mont) {
        monto = mont;
    }
   

std::string CalculoPrestamo::reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT) {
    float primerBalance = getMonto();
    std::string tasa;
    float interes = calcularInteresMensual(primerBalance, (obtenerPorcentaje(porcentajeTXT)));
    float nuevoBalance = primerBalance + interes;
    int numMeses = calcularTiempoEnMeses(tiempoTXT);

    for (int valor = 1; valor < numMeses; valor++) {
        tasa = tasa+"Tasa[" + porcentajeTXT + "],Mes[" + std::to_string(valor) + "], Balance Inicial [" +
                std::to_string(primerBalance) + "], Interes [" + std::to_string(interes) + "], Balance Nuevo[" +
                std::to_string(nuevoBalance) + "]\n";

        primerBalance = nuevoBalance;
        interes = calcularInteresMensual(primerBalance, (obtenerPorcentaje(porcentajeTXT)));
        nuevoBalance = primerBalance + interes;

    }
    return tasa;
}



