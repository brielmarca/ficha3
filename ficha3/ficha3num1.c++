#include <iostream>
using namespace std;

int main() {
    int mes;

    // Pede ao usuário para digitar o número do mês
    cout << "Digite o número do mês (1 a 12): ";
    cin >> mes;

    // Verifica o número de dias no mês usando if...else
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        cout << "O mês possui 31 dias." << endl;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        cout << "O mês possui 30 dias." << endl;
    }
    else if (mes == 2) {
        cout << "O mês possui 28 dias (não é bissexto)." << endl;
    }
    else {
        cout << "Mês inválido! Por favor, insira um número entre 1 e 12." << endl;
    }

    return 0;
}