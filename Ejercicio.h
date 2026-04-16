#ifndef EJERCICIO_H
#define EJERCICIO_H

#include <iostream>
#include <string>

class Ejercicio {
protected:
    int codigo;
    std::string nombre;
    std::string nivelIntensidad;
    int tiempoMinutos;
    std::string descripcion;

public:
    Ejercicio(int codigo, const std::string& nombre, const std::string& nivelIntensidad, int tiempoMinutos, const std::string& descripcion);
    virtual ~Ejercicio();

    virtual void mostrarInformacion();
    virtual std::string getTipo() const = 0;

    int getCodigo() const;
    const std::string& getNivelIntensidad() const;
    int getTiempoMinutos() const;
    const std::string& getNombre() const;
    void setNombre(const std::string& nuevoNombre);
    void setNivelIntensidad(const std::string& nuevoNivel);
    void setTiempoMinutos(int nuevoTiempo);
    void setDescripcion(const std::string& nuevaDescripcion);
};

#endif
