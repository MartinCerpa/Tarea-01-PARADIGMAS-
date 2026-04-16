#include "EjercicioCardiovascular.h"
#include <iostream>

EjercicioCardiovascular::EjercicioCardiovascular(int codigo, const std::string& nombre, const std::string& nivelIntensidad, int tiempoMinutos, const std::string& descripcion, const std::string& zonaCardiaca)
    : Ejercicio(codigo, nombre, nivelIntensidad, tiempoMinutos, descripcion), zonaCardiaca(zonaCardiaca) {
}

EjercicioCardiovascular::~EjercicioCardiovascular() {
}

void EjercicioCardiovascular::mostrarInformacion() {
    Ejercicio::mostrarInformacion();
    std::cout << "Zona cardiaca: " << zonaCardiaca << std::endl;
}

std::string EjercicioCardiovascular::getTipo() const {
    return "Cardiovascular";
}
