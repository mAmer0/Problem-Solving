#include<iostream>
using namespace std;
 
int main() {
    int a, b, c;
    
    cin >> a >> b >> c;

    int max = (a+b+abs(a-b))/2;
    max = (max+c+abs(max-c))/2;

    cout << max << " eh o maior\n"; 
    return 0;
}