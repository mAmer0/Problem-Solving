#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double result = ((a*2) + (b*3) + (c*5))/10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << result << '\n';
    return 0;
}