// Projeto feito por Danielle e Guilherme.
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

vector<string> passageiros;
vector<string> origens;
vector<string> destinos;
vector<string> datas;

void LimpaBufferDoCin()
{
    //limpa o buffer do cin antes de usar getline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
void cadastrarPassagem()
{
    string nome,origem,destino,dataViagem;
 LimpaBufferDoCin();
 cout << "Digite o nome do passageiro:" << endl;
 getline (cin, nome);
cout << "\n";
passageiros.push_back(nome);
 cout << "Digite a origem do passageiro:" << endl;
 getline (cin, origem);
cout << "\n";
origens.push_back(origem);
 cout << "Digite o destino do passageiro:" << endl;
 getline (cin, destino);
cout << "\n";
destinos.push_back(destino);
 cout << "Digitea data da viagem que o passageiro deseja:" << endl;
 getline (cin, dataViagem);
cout << "\n";
datas.push_back(dataViagem);

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
    cout << "quantidade de passagens:"<< passageiros.size() << endl << endl;
     for (int i = 0; i < passageiros.size(); i++){
        cout << "Nome :"  << passageiros[i] << endl;
        cout << "Origem :" << origens[i] << endl;
        cout << "Destino :" << destinos[i] << endl;
        cout << "data da viagem :" << datas[i] << endl;
        cout << endl;
    }
}

int main()
{
    system("cls");

    int opcao = -1;
    string continua;
    desenhaBoasVindas();

        desenhaMenu();
    do
    {
    cout << "opcao: " << endl;
        cin >> opcao;
        cout << endl;
        switch (opcao)
        {
        case 1:
    cout << " ----------------------------------------------- " << endl;
            cout << "Voce escolheu a opcao cadastrar passagem " << endl;
            cadastrarPassagem();
    cout << " ----------------------------------------------- " << endl;
            break;
        case 2:
    cout << " --------------------------------------------- " << endl;
            cout << "Voce escolheu a opcao listar passagens " << endl;
            listarPassagens();
    cout << " ----------------------------------------------" << endl;
            break;
        default:
    cout << " ----------------------------------" << endl;
            cout << "Opcao invalida" << endl;
    cout << " ---------------------------------- " << endl;
            break;
        }
    } while (opcao != 0);

    cout << " ----------------------------------- " << endl;
    cout << "Obrigado por utilizar o programa :)  " << endl;
    cout << " ------------------------------------" << endl;
    return 0;
}
