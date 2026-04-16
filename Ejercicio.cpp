#include "Ejercicio.h"

Ejercicio::Ejercicio(int codigo, const std::string& nombre, const std::string& nivelIntensidad, int tiempoMinutos, const std::string& descripcion) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->nivelIntensidad = nivelIntensidad;
    this->tiempoMinutos = tiempoMinutos;
    this->descripcion = descripcion;
}

Ejercicio::~Ejercicio() {
}

void Ejercicio::mostrarInformacion() {
    std::cout << "Codigo: " << codigo << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Tipo: " << getTipo() << std::endl;
    std::cout << "Nivel de intensidad: " << nivelIntensidad << std::endl;
    std::cout << "Tiempo estimado: " << tiempoMinutos << " minutos" << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
}

int Ejercicio::getCodigo() const {
    return codigo;
}

const std::string& Ejercicio::getNivelIntensidad() const {
    return nivelIntensidad;
}

int Ejercicio::getTiempoMinutos() const {
    return tiempoMinutos;
}

const std::string& Ejercicio::getNombre() const {
    return nombre;
}

void Ejercicio::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Ejercicio::setNivelIntensidad(const std::string& nuevoNivel) {
    nivelIntensidad = nuevoNivel;
}

void Ejercicio::setTiempoMinutos(int nuevoTiempo) {
    tiempoMinutos = nuevoTiempo;
}

void Ejercicio::setDescripcion(const std::string& nuevaDescripcion) {
    descripcion = nuevaDescripcion;
}
