#include <iostream>
using namespace std;

int main(){
    int numero[5];
    int soma = 0;
    float media = 0.0; 

    for (int i = 0; i <5; i++){
        cout << " Digite o " << i + 1 << "° numero: " << endl;
        cin >> numero[i];
        soma = soma += numero[i];
    
    }

    media = (float)soma / 5;


    cout << "A soma dos numeros digitados é: " << soma << endl;
    cout << "A media dos numeros digitados é: " << media << endl;

}