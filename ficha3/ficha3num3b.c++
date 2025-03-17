#include <iostream>
using namespace std;

int main() {
    int dia;

    // Pede ao usuário para digitar o número do dia da semana
    cout << "Digite o número do dia da semana (1 a 7): ";
    cin >> dia;

    // Usa switch...case para verificar o tipo de dia
    switch (dia) {
        case 2: // Segunda-feira
        case 3: // Terça-feira
        case 4: // Quarta-feira
        case 5: // Quinta-feira
        case 6: // Sexta-feira
            cout << "O dia é útil." << endl;
            break;

        case 1: // Domingo
        case 7: // Sábado
            cout << "O dia é final de semana." << endl;
            break;

        default: // Números inválidos
            cout << "Dia inválido! Por favor, insira um número entre 1 e 7." << endl;
            break;
    }

    return 0;
}