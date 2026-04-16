#include "EjercicioFuerza.h"
#include <iostream>

EjercicioFuerza::EjercicioFuerza(int codigo, const std::string& nombre, const std::string& nivelIntensidad, int tiempoMinutos, const std::string& descripcion, const std::string& grupoMuscular)
    : Ejercicio(codigo, nombre, nivelIntensidad, tiempoMinutos, descripcion), grupoMuscular(grupoMuscular) {
}

EjercicioFuerza::~EjercicioFuerza() {
}

void EjercicioFuerza::mostrarInformacion() {
    Ejercicio::mostrarInformacion();
    std::cout << "Grupo muscular: " << grupoMuscular << std::endl;
}

std::string EjercicioFuerza::getTipo() const {
    return "Fuerza";
}
