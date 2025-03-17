#include <iostream>
using namespace std;

int main() {
    float peso, pesoIdeal;
    char sexo;

    // Entrada dos dados
    cout << "Digite seu peso atual: ";
    cin >> peso;
    cout << "Digite seu sexo (M/F): ";
    cin >> sexo;

    // Cálculo do peso ideal usando if...else
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (peso - 100) * 0.9;
        cout << "Seu peso ideal é: " << pesoIdeal << " kg" << endl;
    }
    else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (peso - 100) * 0.85;
        cout << "Seu peso ideal é: " << pesoIdeal << " kg" << endl;
    }
    else {
        cout << "Sexo inválido! Digite 'M' para masculino ou 'F' para feminino." << endl;
    }

    return 0;
}