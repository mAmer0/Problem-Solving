#include<iostream>
#include<iomanip>
using namespace std;
 
int main() {
    int code, units;
    float price;

    float sum = 0;

    for(int i=0; i<2; i++){
        cin >> code >> units >> price;
        sum+= units*price;
    }

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << sum << '\n';
    return 0;
}