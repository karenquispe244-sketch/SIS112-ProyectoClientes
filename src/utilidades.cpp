// utilidades.cpp
// Proposito: Funciones de utilidad general del sistema (menu, pantalla, pausa)
// Parametros: ninguno
// Retorno: void

#include <iostream>
#include <cstdlib>
#include "utilidades.h"
using namespace std;

void mostrarMenu() {
    cout << "\n========================================" << endl;
    cout << "     SISTEMA DE GESTION DE CLIENTES     " << endl;
    cout << "========================================" << endl;
    cout << "  [CRUD - Archivos Binarios]" << endl;
    cout << "  1. Crear cliente" << endl;
    cout << "  2. Listar clientes" << endl;
    cout << "  3. Modificar cliente" << endl;
    cout << "  4. Eliminar cliente" << endl;
    cout << "  [ORDENACION]" << endl;
    cout << "  5. Ordenar / Comparar algoritmos" << endl;
    cout << "  [BUSQUEDA]" << endl;
    cout << "  6. Buscar cliente" << endl;
    cout << "  [INTERCALACION]" << endl;
    cout << "  7. Intercalar archivos" << endl;
    cout << "  [SISTEMA]" << endl;
    cout << "  8. Reinicializar datos de prueba" << endl;
    cout << "  9. Salir" << endl;
    cout << "========================================" << endl;
    cout << "Opcion: ";
}

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void pausar() {
    cout << "\nPresione Enter para continuar...";
    cin.ignore(1000, '\n');
}