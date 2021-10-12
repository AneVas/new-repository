#include <iostream>
#include <cstring>
using namespace std; // no recomendado.

class ADN {
private:
    string secuencia;
public:
    ADN(string _secuencia);
    string GetSecuencia();
    int Longitud();
    string Transcripcion();
    string GetTranscripcion();

};

ADN::ADN(string _secuencia){
    secuencia=_secuencia;
}
string ADN::GetSecuencia(){
    return secuencia;
}

int ADN::Longitud(){
    return secuencia.length();
}
// string ADN::Transcripcion() {
//   string out = ""; // Realmente no se si esta bien :p
//   for (int i = 0; i <= secuencia.length(); i++)
//     out += (secuencia[i] == 'T')? 'U': secuencia[i];
//   return out;
// }
string ADN::Transcripcion() {
    for (int i = 0; i <= secuencia.length(); i++)
        secuencia[i] = (secuencia[i] == 'T')? 'U': secuencia[i];
    return secuencia;
}
int main() {
    string Secuencia_ADN = "";               // Aqui cambia la cosa!!!
    cout << "Inserte secuencia de ADN: ";
    cin >> Secuencia_ADN;

    ADN a1(Secuencia_ADN);                   // Quitamos las comillas.
    cout << "La secuencia de ADN es:" << a1.GetSecuencia() << endl;
    cout << "La longitud de la secuencia es:" << a1.Longitud() << endl;
    cout << "La secuencia de ARN es: " << a1.Transcripcion() << endl;

    // system("pause");
    return 0;
}