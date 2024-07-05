#include<iostream>
#include<iomanip>
#define endl '\n'

using namespace std;
 
int main() {
    int timeSpent, averageSpeed;
    cin >> timeSpent >> averageSpeed;

    double result = (timeSpent*averageSpeed)/12.000;
    cout << fixed << setprecision(3);
    cout << result << endl;

    return 0;
}