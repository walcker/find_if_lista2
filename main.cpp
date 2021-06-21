#include <iostream>
#include <vector>
using namespace std;
int main() {

    // Declara das variáveis.
    //int cont =0;
    int n; 
    char m;             

    //Requisita ao usuário o número de valores do vetor
    cout << "Entre com o número de objetos do vetor: ";
    cin >> n;
    cout << endl;

    //Cria o vetor no tamanho que o usuário requisita
    char vetor[n];

    for (int i = 0 ; i < n ; i++){

       // Insere elementos no vetor
        cout << "Entre com  os objetos do vetor." <<  endl;
        cin >> m;
        vetor[i] = m;
    }

    for (int i = 0 ; i < n ; i++){

       // Imprime o vetor
        cout << vetor[i] <<  endl;
    }

    cout << endl;
    //cout << cont << endl;
}