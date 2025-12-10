#include <iostream>
using namespace std;

int main() {
    int numeros[8];
    int maiorValor, menorValor;
    int posMaior, posMenor;

    for (int i = 0; i < 8; i++) {
        cout << "Digite o " << i + 1 << "° número: ";
        cin >> numeros[i];
    }


    maiorValor = menorValor = numeros[0];
    posMaior = posMenor = 0;

    for (int i = 1; i < 8; i++) {
        if (numeros[i] > maiorValor) {
            maiorValor = numeros[i];
            posMaior = i;
        }
        if (numeros[i] < menorValor) {
            menorValor = numeros[i];
            posMenor = i;
        }
    }

    cout << "O maior valor é: " << maiorValor << " e está na posição: " << posMaior + 1 << endl;
    cout << "O menor valor é: " << menorValor << " e está na posição: " << posMenor + 1 << endl;

    return 0;
}
