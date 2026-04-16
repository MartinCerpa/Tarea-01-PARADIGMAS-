#ifndef EJERCICIOCARDIOVASCULAR_H
#define EJERCICIOCARDIOVASCULAR_H

#include "Ejercicio.h"

class EjercicioCardiovascular : public Ejercicio {
private:
    std::string zonaCardiaca;
public:
    EjercicioCardiovascular(int codigo, const std::string& nombre, const std::string& nivelIntensidad, int tiempoMinutos, const std::string& descripcion, const std::string& zonaCardiaca);
    ~EjercicioCardiovascular();

    void mostrarInformacion() override;
    std::string getTipo() const override;
};

#endif