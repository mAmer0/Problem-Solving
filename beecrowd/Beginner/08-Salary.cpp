#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int empNo, workdHours;
    float amountPH;

    cin >> empNo >> workdHours >> amountPH;
    cout << "NUMBER = " << empNo << '\n';
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << workdHours*amountPH << '\n';
    return 0;
}