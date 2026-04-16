#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <vector>
#include <map>
#include "Ejercicio.h"
#include "EjercicioCardiovascular.h"
#include "EjercicioFuerza.h"
#include "Rutina.h"
#include "Cliente.h"

class Sistema {
private:
    std::vector<Ejercicio*> ejercicios;
    std::map<std::string, Cliente*> clientes;

public:
    ~Sistema();
    std::string seleccionarIntensidad();
    Cliente* buscarOCrearCliente(const std::string& nombre);
    void menu();

    void crearEjercicio();
    void listarEjercicios();
    void buscarPorIntensidad();
    void eliminarEjercicio();
    void actualizarEjercicio();
    void consultarEjercicio();
    void generarRutina();
};

#endif
