#include <iostream>
#include<iomanip>
#include <cmath>
#define pi 3.14159

using namespace std;
 
int main() {
    double r;
    cin >> r;

    double result = (4.0/3) * pi * pow(r, 3);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << result << '\n';
    return 0;
}