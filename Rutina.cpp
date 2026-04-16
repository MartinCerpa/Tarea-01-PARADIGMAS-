#include "Rutina.h"
#include <string>
using namespace std;

Rutina::Rutina(string nombreCliente, string objetivo, int semana) {
    this->nombreCliente = nombreCliente;
    this->objetivo = objetivo;
    this->semana = semana;
}

void Rutina::agregarEjercicio(Ejercicio* e) {
    ejercicios.push_back(e);
}

int Rutina::calcularTiempoTotal() {
    int total = 0;
    for (int i = 0; i < ejercicios.size(); i++) {
        total += ejercicios[i]->getTiempoMinutos();
    }
    return total;
}

void Rutina::mostrarRutina() {
    cout << "Cliente: " << nombreCliente << endl;
    cout << "Objetivo: " << objetivo << endl;
    cout << "Semana: " << semana << endl;
    cout << "Ejercicios:" << endl;

    for (int i = 0; i < ejercicios.size(); i++) {
        ejercicios[i]->mostrarInformacion();
        cout << "--------------------" << endl;
    }

    cout << "Tiempo total: " << calcularTiempoTotal() << " minutos" << endl;
}