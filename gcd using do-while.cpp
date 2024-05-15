#include<iostream>
using namespace std;
int gcd(int a, int b) {
    int temp;
    do {
        temp = b;
        b = a % b;
        a = temp;
    } while (b!= 0);
    return a;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    return 0;
}
