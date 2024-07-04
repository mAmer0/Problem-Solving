#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    string name;
    double salary, valueSold;

    cin >> name >> salary >> valueSold;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary+(valueSold*0.15) << '\n';
    return 0;
}