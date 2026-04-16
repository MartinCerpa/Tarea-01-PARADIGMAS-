#ifndef RUTINA_H
#define RUTINA_H

#include <iostream>
#include <vector>
#include <string>
#include "Ejercicio.h"

class Rutina {
private:
    std::string nombreCliente;
    std::string objetivo;
    int semana;
    std::vector<Ejercicio*> ejercicios;

public:
    Rutina(std::string nombreCliente, std::string objetivo, int semana);

    // Métodos
    void agregarEjercicio(Ejercicio* e);
    int calcularTiempoTotal();
    void mostrarRutina();
};

#endif