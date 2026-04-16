#include "Cliente.h"

Cliente::Cliente(const std::string& nombre, const std::string& objetivo)
    : nombre(nombre), objetivo(objetivo) {
}

Cliente::~Cliente() {
}

const std::string& Cliente::getNombre() const {
    return nombre;
}

const std::string& Cliente::getObjetivo() const {
    return objetivo;
}

const std::vector<std::pair<int, int>>& Cliente::getHistorial() const {
    return historialEjercicios;
}

bool Cliente::ejercicioUsadoEnSemanaAnterior(int codigoEjercicio, int semana) const {
    for (const auto& par : historialEjercicios) {
        if (par.first == codigoEjercicio && par.second == semana - 1) {
            return true;
        }
    }
    return false;
}

void Cliente::registrarUso(int codigoEjercicio, int semana) {
    historialEjercicios.push_back(std::make_pair(codigoEjercicio, semana));
}
