#include <iostream>
using namespace std;

int main() {
    int mes;

    // Pede ao usuário para digitar o número do mês
    cout << "Digite o número do mês (1 a 12): ";
    cin >> mes;

    // Usa switch...case para verificar o número de dias no mês
    switch (mes) {
        case 1: // Janeiro
        case 3: // Março
        case 5: // Maio
        case 7: // Julho
        case 8: // Agosto
        case 10: // Outubro
        case 12: // Dezembro
            cout << "O mês possui 31 dias." << endl;
            break;

        case 4: // Abril
        case 6: // Junho
        case 9: // Setembro
        case 11: // Novembro
            cout << "O mês possui 30 dias." << endl;
            break;

        case 2: // Fevereiro
            cout << "O mês possui 28 dias (não é bissexto)." << endl;
            break;

        default: // Caso o número do mês seja inválido
            cout << "Mês inválido! Por favor, insira um número entre 1 e 12." << endl;
            break;
    }

    return 0;
}