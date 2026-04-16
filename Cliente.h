#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include <utility>

class Cliente {
private:
    std::string nombre;
    std::string objetivo;
    std::vector<std::pair<int, int>> historialEjercicios;

public:
    Cliente(const std::string& nombre, const std::string& objetivo);
    ~Cliente();

    const std::string& getNombre() const;
    const std::string& getObjetivo() const;
    const std::vector<std::pair<int, int>>& getHistorial() const;
    bool ejercicioUsadoEnSemanaAnterior(int codigoEjercicio, int semana) const;
    void registrarUso(int codigoEjercicio, int semana);
};

#endif
