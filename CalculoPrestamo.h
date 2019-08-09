//
// Created by Maikol Guzman  on 2019-08-08.
//

#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H


#include <cstdint>
#include <string>

class CalculoPrestamo{
    
    private:
    float monto;
    float obtenerPorcentaje(std::string);
    int calcularTiempoEnMeses(std::string);
    float calcularInteresMensual(float, float);
    
    public:
    
    CalculoPrestamo();
   
    CalculoPrestamo(int);
    
    std::string reporteCalculoPrestamo(std::string, std::string)
    
    float getMonto();
    
    void setMonto(float);

};

#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H
