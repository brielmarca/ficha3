#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcao;
    string nome, documento, quarto;
    string nomeVerificacao; // Variável para validar o nome em ações

    do {
        cout << "\n=== Sistema do Hotel ===\n";
        cout << "1. Fazer Check-in\n";
        cout << "2. Chamar serviço de quarto\n";
        cout << "3. Fazer pedido\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: // Check-in
                cout << "\n=== Check-in ===\n";
                cout << "Nome completo: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Documento de identidade: ";
                getline(cin, documento);
                cout << "Número do quarto: ";
                getline(cin, quarto);
                cout << "\nCheck-in confirmado para:\n";
                cout << "Nome: " << nome << "\nQuarto: " << quarto << endl;
                break;

            case 2: { // Serviço de quarto
                cout << "\n=== Serviço de Quarto ===\n";
                cout << "Número do quarto: ";
                cin >> quarto;
                cout << "Nome do hóspede: ";
                cin.ignore();
                getline(cin, nomeVerificacao);
                
                int subOpcao;
                cout << "Escolha o serviço:\n";
                cout << "1. Limpeza\n2. Troca de toalhas\n3. Manutenção\n";
                cin >> subOpcao;

                switch (subOpcao) {
                    case 1:
                        cout << "\nServiço de limpeza solicitado para:\n";
                        cout << "Quarto: " << quarto << "\nHóspede: " << nomeVerificacao << endl;
                        break;
                    case 2:
                        cout << "\nTroca de toalhas solicitada para:\n";
                        cout << "Quarto: " << quarto << "\nHóspede: " << nomeVerificacao << endl;
                        break;
                    case 3:
                        cout << "\nManutenção solicitada para:\n";
                        cout << "Quarto: " << quarto << "\nHóspede: " << nomeVerificacao << endl;
                        break;
                    default:
                        cout << "Opção inválida!" << endl;
                }
                break;
            }

            case 3: { // Fazer pedido
                cout << "\n=== Fazer Pedido ===\n";
                cout << "Número do quarto: ";
                cin >> quarto;
                cout << "Nome do hóspede: ";
                cin.ignore();
                getline(cin, nomeVerificacao);
                
                int subOpcao;
                cout << "Escolha o tipo de pedido:\n";
                cout << "1. Alimentação\n2. Bebidas\n3. Amenidades\n";
                cin >> subOpcao;

                switch (subOpcao) {
                    case 1: // Alimentação
                        cout << "\nEscolha a refeição:\n";
                        cout << "1. Café da manhã\n2. Almoço\n3. Jantar\n";
                        cin >> subOpcao;
                        cout << "\nPedido de ";
                        if (subOpcao == 1) cout << "café da manhã";
                        else if (subOpcao == 2) cout << "almoço";
                        else if (subOpcao == 3) cout << "jantar";
                        cout << " enviado para:\n";
                        cout << "Quarto: " << quarto << "\nHóspede: " << nomeVerificacao << endl;
                        break;

                    case 2: // Bebidas
                        cout << "\nEscolha a bebida:\n";
                        cout << "1. Água\n2. Refrigerante\n3. Suco\n";
                        cin >> subOpcao;
                        cout << "\nPedido de ";
                        if (subOpcao == 1) cout << "água";
                        else if (subOpcao == 2) cout << "refrigerante";
                        else if (subOpcao == 3) cout << "suco";
                        cout << " enviado para:\n";
                        cout << "Quarto: " << quarto << "\nHóspede: " << nomeVerificacao << endl;
                        break;

                    case 3: // Amenidades
                        cout << "\nEscolha a amenidade:\n";
                        cout << "1. Kit de higiene\n2. Cobertor extra\n3. Travesseiro extra\n";
                        cin >> subOpcao;
                        cout << "\nPedido de ";
                        if (subOpcao == 1) cout << "kit de higiene";
                        else if (subOpcao == 2) cout << "cobertor extra";
                        else if (subOpcao == 3) cout << "travesseiro extra";
                        cout << " enviado para:\n";
                        cout << "Quarto: " << quarto << "\nHóspede: " << nomeVerificacao << endl;
                        break;

                    default:
                        cout << "Opção inválida!" << endl;
                }
                break;
            }

            case 0:
                cout << "\nSaindo do sistema..." << endl;
                break;

            default:
                cout << "\nOpção inválida! Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}