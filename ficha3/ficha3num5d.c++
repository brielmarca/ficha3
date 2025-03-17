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

    // Cálculo do peso ideal usando switch...case
    switch (sexo) {
        case 'M':
        case 'm':
            pesoIdeal = (peso -100 ) * 0.9;
            cout << "Seu peso ideal é: " << pesoIdeal << " kg" << endl;
            break;

        case 'F':
        case 'f':
            pesoIdeal = (peso - 100) * 0.85;
            cout << "Seu peso ideal é: " << pesoIdeal << " kg" << endl;
            break;

        default:
            cout << "Sexo inválido! Digite 'M' para masculino ou 'F' para feminino." << endl;
            break;
    }

    return 0;
}