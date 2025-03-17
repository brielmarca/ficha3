#include <iostream>
using namespace std;

int main() {
    int dia;

    // Pede ao usuário para digitar o número do dia da semana
    cout << "Digite o número do dia da semana (1 a 7): ";
    cin >> dia;

    // Verifica o tipo de dia usando if...else
    if (dia >= 2 && dia <= 6) { // Dias úteis: segunda a sexta
        cout << "O dia é útil." << endl;
    }
    else if (dia == 1 || dia == 7) { // Final de semana: domingo ou sábado
        cout << "O dia é final de semana." << endl;
    }
    else { // Caso o número seja inválido
        cout << "Dia inválido! Por favor, insira um número entre 1 e 7." << endl;
    }

    return 0;
}