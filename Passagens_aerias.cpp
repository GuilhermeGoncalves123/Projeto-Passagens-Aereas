// Projeto feito por Danielle e Guilherme.
#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;
string nome, origem, destino, dataViagem;
void LimpaBufferDoCin()
{
    // limpa o buffer do cin antes de usar getline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void cadastrarPassagem()
{
    LimpaBufferDoCin();
    cout << "Digite o nome do passageiro:" << endl;
    getline(cin, nome);
    cout << endl;
    passageiros.push_back(nome);
    cout << "Digite a origem do passageiro:" << endl;
    getline(cin, origem);
    cout << endl;
    passageiros.push_back(origem);
    cout << "Digite o destino do passageiro:" << endl;
    getline(cin, destino);
    cout << endl;
    passageiros.push_back(destino);
    cout << "Digitea data da viagem que o passageiro deseja:" << endl;
    getline(cin, dataViagem);
    cout << endl;
    passageiros.push_back(dataViagem);
}

string desenhaBoasVindas()
{
    cout << " ---------------------------- " << endl;
    cout << "|                             |" << endl;
    cout << "|   Bem vindo ao programa     |" << endl;
    cout << "|             de              |" << endl;
    cout << "|      passagens aereas       |" << endl;
    cout << "|                             |" << endl;
    cout << " ---------------------------- " << endl;
}
string desenhaMenu()
{
    cout << " ------------MENU---------- " << endl;
    cout << "| Escolha uma opcao:       | " << endl;
    cout << "| 1) Cadastrar Passagem    |" << endl;
    cout << "| 2) Listar Passagens      |" << endl;
    cout << "| 0) Sair                  |" << endl;
    cout << " ------------MENU---------- " << endl;
    cout << "opcao: " << endl;
}
string listarPassagens()
{
    cout << " ----------------------------- " << endl;
    cout << "|                             |" << endl;
    cout << "|   Bem vindo ao programa     |" << endl;
    cout << "|             de              |" << endl;
    cout << "|   Lista de passageiros      |" << endl;
    cout << "|                             |" << endl;
    cout << " ----------------------------- " << endl;
    cout << endl;
    cout << endl;
    cout << "Quantidade de passagens:" << passageiros.size() << endl << endl;
    for (int i = 0; i < passageiros.size(); i++){
        cout << "Nome :"  << nome[i] << endl;
        cout << "Origem :" << origem[i] << endl;
        cout << "Destino :" << destino[i] << endl;
        cout << "data da viagem :" << dataViagem[i] << endl;
    }
}
int main()
{
    system("cls");
    int opcao = -1;
    string continua = "";
    desenhaBoasVindas();
    do
    {
        desenhaMenu();
        cin >> opcao;
        cout << endl;
        switch (opcao)
        {
        case 1:
            cout << "Voce escolheu a opcao cadastrar passagem " << endl
                 << endl;
            cadastrarPassagem();
            break;
        case 2:
            cout << "Voce escolheu a opcao listar passagens" << endl;
            listarPassagens();
            break;
        default:
            cout << "Opcao invalida " << endl;
            break;
        }
    } while (opcao != 0);
    cout << "Obrigado por utilizar o programa :) " << endl;
    return 0;
}