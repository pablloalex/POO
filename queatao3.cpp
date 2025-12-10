#include <iostream>
using namespace std;

int main(){
    int numero[5];
    for (int i = 0; i <5; i++){

    cout << "Informe " << i + 1 << "° numeros: ";
    cin >> numero[i];

    }
    cout << "os numeros que vc digitou: ";
    for (int i = 0; i <5; i++){
    cout << numero[i] << ","; 
    }








}