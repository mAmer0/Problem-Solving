#include<iostream>
#include<cmath>
#define endl '\n'

using namespace std;
 
int main() {
    float n;
    cin >> n;

    int intN = n;
    n = n - intN;

    int hundred = intN/100;
    intN %= 100;

    int fifty = intN/50;
    intN %= 50;

    int twenty = intN/20;
    intN %= 20;

    int ten = intN/10;
    intN %= 10;

    int five = intN/5;
    intN %= 5;

    int two = intN/2;
    intN %= 2;

    n = round(n * 100);

    int fiftyCents = n/50;
    n = fmod(n,50);

    int twentyFiveCents = n/25;
    n = fmod(n,25);

    int tenCents = n/10;
    n = fmod(n,10);

    int fiveCents = n/5;
    n = fmod(n,5); 

    int oneCent = n / 1;

    cout << "NOTAS:" << endl;
    cout << hundred << " nota(s) de R$ 100.00" << endl;
    cout << fifty << " nota(s) de R$ 50.00" << endl;
    cout << twenty << " nota(s) de R$ 20.00" << endl;
    cout << ten << " nota(s) de R$ 10.00" << endl;
    cout << five << " nota(s) de R$ 5.00" << endl;
    cout << two << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << intN << " moeda(s) de R$ 1.00" << endl;
    cout << fiftyCents << " moeda(s) de R$ 0.50" << endl;
    cout << twentyFiveCents << " moeda(s) de R$ 0.25" << endl;
    cout << tenCents << " moeda(s) de R$ 0.10" << endl;
    cout << fiveCents << " moeda(s) de R$ 0.05" << endl;
    cout << oneCent << " moeda(s) de R$ 0.01" << endl;

    return 0;
}