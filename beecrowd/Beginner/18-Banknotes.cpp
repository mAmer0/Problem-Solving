#include<iostream>
#define endl '\n'

using namespace std;
 
int main() {
    int n;
    cin >> n;
    int temp = n;

    int hundred = n/100;
    n = n%100;

    int fifty = n/50;
    n = n%50;

    int twenty = n/20;
    n = n%20;

    int ten = n/10;
    n = n%10;

    int five = n/5;
    n = n%5;

    int two = n/2;
    n = n%2;

    cout << temp << endl;
    cout << hundred << " nota(s) de R$ 100,00" << endl;
    cout << fifty << " nota(s) de R$ 50,00" << endl;
    cout << twenty << " nota(s) de R$ 20,00" << endl;
    cout << ten << " nota(s) de R$ 10,00" << endl;
    cout << five << " nota(s) de R$ 5,00" << endl;
    cout << two << " nota(s) de R$ 2,00" << endl;
    cout << n << " nota(s) de R$ 1,00" << endl;

    return 0;
}