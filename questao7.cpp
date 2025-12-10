#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[6];
    string nomeBusca;
    bool encontrado = false;


    cout << "Digite 6 nomes: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << "Nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    cout << "Digite o nome a ser buscado: ";
    cin >> nomeBusca;

    for (int i = 0; i < 6; i++) {
        if (nomes[i] == nomeBusca) {
            cout << "O nome " << nomeBusca << " foi encontrado na posição " << i + 1 << " do vetor." << endl;
            encontrado = true;
            break; 
        }
    } 
    
    if (!encontrado) {
        cout << "O nome " << nomeBusca << " não foi encontrado no vetor." << endl;
    }

    return 0;
}
