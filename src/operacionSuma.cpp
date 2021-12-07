#include "operacionSuma.h"
#include <string>
#include <iostream>
#include <sstream>

OperacionSuma::OperacionSuma(ProveedorFormato *proveedorFormato) {
    this->proveedorFormato = proveedorFormato;
}

string OperacionSuma::Ejecute(string valor) {

    std::istringstream datos(proveedorFormato->ObtenerFormato()); 
    std::string dato; 
  
    int num1 = 0;
    int num2 = 0;

    int conteoDatos = 1;
    while (datos >> dato)
    {
        
        if(conteoDatos == 2){
            
            num1 = stoi(dato);
        }
        if(conteoDatos == 4){
            
            num2 = stoi(dato);
        }
        
        conteoDatos++;
    }
    
    int resultado = num1 + num2;
    return to_string(resultado);
}