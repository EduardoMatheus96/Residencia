#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    float A, B;
    cout << "Insira o primeiro numero: " << endl;
    cin >> A;
    cout << "Insira o segundo numero: " << endl;
    cin >> B;

    cout << fixed << setprecision(1) << "Soma = " << A + B << endl;
    cout << "Subtração = " << A - B << endl;
    cout << "Multiplicação = " << A * B << endl;
    cout << setprecision(2) << "Divisão = " << A / B << endl;
    

    return 0;
}