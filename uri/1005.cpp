#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A, B,MEDIA=0;
    cin >> A;
    cin >> B;
    A = A*3.5;
    B = B*7.5;
    MEDIA = (A+B)/(3.5+7.5);
    cout <<setprecision(5)<< fixed<<  "MEDIA = "<< MEDIA << endl;
    return 0;
}
