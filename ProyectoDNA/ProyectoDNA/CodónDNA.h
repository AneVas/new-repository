//Vamos a obtener codones
// Created by Anel Vargas on 15/10/2021.
//

#ifndef PROYECTOSECUENCIA_ADN_H
#define PROYECTOSECUENCIA_ADN_H
#include <map>

using namespace std;

class ADN{

public: //métodos
    ADN(string _secuencia);
    string GetSecuencia();
    int Longitud();
    string Transcripcion();
    string codon();
    string Comprobacion();
    string GetComprobacion();

    string GetAminoacidos2();

private: //atributos
    string secuencia;
    map <string, string> codones;

    string Aminoacidos2();
};

#endif //PROYECTOSECUENCIA_ADN_H