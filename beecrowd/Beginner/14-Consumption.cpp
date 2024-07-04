#include<iostream>
#include<iomanip>

using namespace std;
 
int main() {
    int distance;
    float totalFuelSpent;

    cin >> distance >> totalFuelSpent;

    cout << fixed << setprecision(3);
    cout << distance/totalFuelSpent << " km/l\n";

    return 0;
}