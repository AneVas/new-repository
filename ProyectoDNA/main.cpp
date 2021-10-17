#include <iostream>
#include <cstring>
using namespace std;
//Definimos nuestra clase
class ADN {

private:
    string secuencia;

public:
    ADN(string _secuencia);
    string GetSecuencia();
    int Longitud(); //porque es un numero
    string Transcripcion(); //conjunto de letras
    string GetTranscripcion();
    string codon();
};
//Declaracion de nuestras variables

ADN::ADN(string _secuencia){
    secuencia=_secuencia;
}
string ADN::GetSecuencia(){
    return secuencia;
}

int ADN::Longitud(){
    return secuencia.length();
}

string ADN::codon() {
    for (int i = 0; i <= secuencia.length(); i++) {
        if (Longitud() == 3){
            Longitud() == 'codon';
        }
    }
            
        return codon();
}

string ADN::Transcripcion() {
    //Recordamos que la transpuesta de cada nucleotido es:
    //Adenina-Uracilo, Timina-Adenina, Guanina-Citosina, Citosina-Guanina

    for (int i = 0; i <= secuencia.length(); i++)
        if (secuencia[i] == 'A') {
            secuencia[i] = 'U';
        }

        else if (secuencia[i] == 'T'){
            secuencia[i] = 'A';
        }

        else if (secuencia[i] == 'G'){
            secuencia[i] = 'C';
        }

        else if (secuencia[i] == 'C'){
            secuencia[i] = 'G';
        }
    return secuencia;
        
}
int main() {
    //Pedimos al usuario que ingrese una secuencia de ADN y que posteriormente la imprima
    string Secuencia_ADN = "";
    cout << "Inserte secuencia de ADN: ";
    cin >> Secuencia_ADN;

    ADN a1(Secuencia_ADN);
    cout << "La secuencia de ADN es:" << a1.GetSecuencia() << endl;
    //Nos debe decir la longitud de nuestra secuencia
    cout << "La longitud de la secuencia es:" << a1.Longitud() << endl;
    //El cambio de cada letra por su transpuesta
    cout << "La secuencia de ARN es: " << a1.Transcripcion() << endl;
    //los codones que encontramos son los siguientes:
    cout << "Los codones son: " << a1.codon() << endl;

    // system("pause");
    return 0;
}
