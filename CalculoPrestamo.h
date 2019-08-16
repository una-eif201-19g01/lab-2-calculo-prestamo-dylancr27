//
// Filename:  CalculoPrestamo.h
// Created by Dylan Molina  on 2019-08-08.
//
// Organization:  Universidad Nacional de Costa Rica
//

#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H
#include <cstdint>
#include <string>

class CalculoPrestamo {
private:
    float monto;
    /**
     * obtenerPorcentaje recibe un valor, y lo 
     * convierte a otro.
     *
     * @param recibe un string
     * @return retorna el valor convertido de string a float.
     */
    float obtenerPorcentaje(std::string);
    
     /**
     * calcularTiempoEnMeses recibe un valor, y lo 
     * convierte a otro.
     *
     * @param recibe un string
     * @return retorna el valor convertido de string a float.
     */
    int calcularTiempoEnMeses(std::string);
     /**
     * calcularInteresMensual se utiliza para calcular
      * el interes mensual a partir de una tasa anual
     *
     * @param recibe dos floats
     * @return retorna el valor convertido de string a float.
     */
    float calcularInteresMensual(float, float);

public:

    CalculoPrestamo();
    CalculoPrestamo(int64_t);
    float getMonto();
    void setMonto(float);
    /**
     * reporteCalculoPrestamo permite ver los calculos
     * del prestamo por pantalla
     *
     * @param recibe dos strings
     * @return Muestra los calculos del prestamo por pantalla.
     */
    std::string reporteCalculoPrestamo(std::string, std::string);


};

#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H
