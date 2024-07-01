#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double r;
    double bi = 3.14159;
    
    cin >> r;

    double res = bi*r*r;

    cout << fixed << setprecision(4);
    cout << "A=" << res << '\n';
}
