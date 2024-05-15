#include<iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
bool isStrong(int n) {
    int sum = 0, temp = n;
    while (temp!= 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp = temp / 10;
    }
    return (n == sum);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isStrong(n)) {
        cout << n << " is a strong number.";
    } else {
        cout << n << " is not a strong number.";
    }
    return 0;
}
