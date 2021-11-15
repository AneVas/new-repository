#include <iostream>
#include <cstring>
#include <map>
#include "CodónDNA.h"

using namespace std;

int main() {
    //Pedimos al usuario que ingrese una secuencia de ADN y que posteriormente la imprima
    string Secuencia_ADN = "";
    cout << "Inserte secuencia de ADN, asegurese de que su secuencia sea multiplo de 3: ";
    cin >> Secuencia_ADN;

    //Pedimos al usuario que ingrese una secuencia de Aminoacidos y que posteriormente la imprima
    string Secuencia_Aminoacidos = "";
    cout << "Inserte secuencia de aminoacidos";
    cin >> Secuencia_Aminoacidos;

    ADN a1(Secuencia_ADN);
    cout << "La secuencia de ADN es:" << a1.GetSecuencia() << endl;
    //Nos debe decir la longitud de nuestra secuencia
    cout << "La longitud de la secuencia es:" << a1.Longitud() << endl;
    //El cambio de cada letra por su transpuesta
    cout << "La secuencia de ARN es: " << a1.Transcripcion() << endl;
    //los codones que encontramos son los siguientes:
    cout << "La secuencia de aminoacidos es: " << a1.codon() << endl;

    //Comprobación
    ADN b1(Secuencia_Aminoacidos);
    //Primero obtenemos la secuencia ingresada
    cout << "La secuencia de Aminoaicidos es:" << b1.GetAminoacidos2() << endl;
    //Ahora la secuencia de ADN ya obtenida a partir de los aminoacidos
    cout <<"La secuencia de ADN a partir de aminoacidos es: "<< b1.Comprobacion() << endl;

    // system("pause");
    return 0;
}