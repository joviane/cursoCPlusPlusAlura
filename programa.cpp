#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cout << "\n\n";
    cout << "          P  /_\\  P                              \n";
    cout << "         /_\\_|_|_/_\\                            \n";
    cout << "     n_n | ||. .|| | n_n         Bem vindo ao     \n";
    cout << "     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n";
    cout << "    |\" \"  |  |_|  |\"  \" |                     \n";
    cout << "    |_____| ' _ ' |_____|                         \n";
    cout << "          \\__|_|__/                              \n";
    cout << "\n\n";

    int segundos = time(0);
    srand(segundos);
    int numeroSecreto = rand() % 100;
    
    int nivel;
    int chute;
    int totalDeTentativas;
    bool acertou;
    double pontos = 1000;

    cout << "Qual o nível de dificuldade?\n";
    cout << "(1) Fácil (2) Médio (3) Difícil\n\n";
    cout << "Escolha: ";
    cin >> nivel;

    switch(nivel) {
        case 1: 
            totalDeTentativas = 20;
            break;
        case 2:
            totalDeTentativas = 15;
            break;
        default:
            totalDeTentativas = 6;
            break;
    }

    for(int tentativa = 1; tentativa <= totalDeTentativas; tentativa++) {
        cout << "Tentativa " << tentativa << " de " << totalDeTentativas << "\n";
        cout << "Qual o seu chute? ";
        cin >> chute;
        cout << "Seu chute foi " << chute << "\n";

        if(chute < 0){
            cout << "Você não pode chutar números negativos!\n";
            tentativa--;
            continue;
        }

        acertou = chute == numeroSecreto;
        bool menor = chute < numeroSecreto;

        if(acertou){
            break;
        }
        else if(menor){
            cout << "Seu chute foi menor do que o número secreto!\n";
        }
        else {
            cout << "Seu chute foi maior do que o número secreto!\n";
        }
        double pontosPerdidos = abs(chute - numeroSecreto) / 2.0;
        pontos -= pontosPerdidos;
    }
    if (acertou) {
        cout << "             OOOOOOOOOOO               \n";
        cout << "         OOOOOOOOOOOOOOOOOOO           \n";
        cout << "      OOOOOO  OOOOOOOOO  OOOOOO        \n";
        cout << "    OOOOOO      OOOOO      OOOOOO      \n";
        cout << "  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n";
        cout << " OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n";
        cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n";
        cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n";
        cout << "OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n";
        cout << " OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n";
        cout << "  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n";
        cout << "    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n";
        cout << "      OOOOOO   OOOOOOOOO   OOOOOO      \n";
        cout << "         OOOOOO         OOOOOO         \n";
        cout << "             OOOOOOOOOOOO              \n";
        cout << "\nParabéns, você acertou!\n";
        cout << "Você fez " << pontos << " pontos! Até a próxima!";
    }
    else {
        cout << "       \\|/ ____ \\|/    \n";   
        cout << "        @~/ ,. \\~@      \n";   
        cout << "       /_( \\__/ )_\\    \n";   
        cout << "          \\__U_/        \n";
        cout << "\nVocê perdeu! Tente novamente!\n\n";
    }
}
