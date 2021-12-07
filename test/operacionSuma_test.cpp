#include <gtest/gtest.h>
#include <string>
#include "./../src/operacionSuma.h"
#include "proveedorFormatoPrueba.h"

using namespace std;

namespace {
    TEST(OperacionSuma_Test, Test_Formato_Aplicado) {

        ProveedorFormatoPrueba *proveedorFormato = new ProveedorFormatoPrueba("Suma 1 + 2");
        OperacionSuma *operacionSuma = new OperacionSuma(proveedorFormato);

        string actual = operacionSuma->Ejecute("1 + 2");
        string esperado = "3";

        EXPECT_EQ(esperado, actual);
    }
}