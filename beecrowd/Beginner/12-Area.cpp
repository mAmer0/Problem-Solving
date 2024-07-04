#include<iostream>
#include<iomanip>
#include<cmath>
#define pi 3.14159

using namespace std;
 
int main() {
    float a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << 0.5 * a*c << '\n';
    cout << "CIRCULO: " << pi * pow(c,2) << '\n';
    cout << "TRAPEZIO: " << 0.5 * c * (a+b) << '\n';
    cout << "QUADRADO: " << pow(b, 2) << '\n';
    cout << "RETANGULO: " << a*b << '\n';
    return 0;
}