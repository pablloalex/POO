#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int X;
    bool encontrado = false;

  
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "° número: ";
        cin >> numeros[i];
    }

    cout << "Digite o número X: ";
    cin >> X;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == X) {
            cout << "O número " << X << " está no vetor e aparece pela primeira vez na posição: " << i + 1 << endl;
            encontrado = true;
            break; 
        }
    }

    if (!encontrado) {
        cout << "O número " << X << " não está no vetor." << endl;
    }

    return 0;
}
