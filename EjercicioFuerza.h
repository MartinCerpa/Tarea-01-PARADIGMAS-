#ifndef EJERCICIOFUERZA_H
#define EJERCICIOFUERZA_H

#include "Ejercicio.h"

class EjercicioFuerza : public Ejercicio {
private:
    std::string grupoMuscular;
public:
    EjercicioFuerza(int codigo, const std::string& nombre, const std::string& nivelIntensidad, int tiempoMinutos, const std::string& descripcion, const std::string& grupoMuscular);
    ~EjercicioFuerza();

    void mostrarInformacion() override;
    std::string getTipo() const override;
};

#endif