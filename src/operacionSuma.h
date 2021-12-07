#ifndef OPERACIONSUMA_H
#define OPERACIONSUMA_H

#include "operacion.h"
#include "proveedorFormato.h"
#include <string>

using namespace std;

class OperacionSuma : public Operacion {

    ProveedorFormato *proveedorFormato;

    public:
    OperacionSuma(ProveedorFormato *proveedorFormato);

    virtual string Ejecute(string valor);
};

#endif