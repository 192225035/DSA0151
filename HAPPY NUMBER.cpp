#include<iostream>
using namespace std;
int sumDigitSquare(int n) {
    int sq = 0;
    while (n) {
        int digit = n % 10;
        sq += digit * digit;
        n = n / 10;
    }
    return sq;
}
bool isHappy(int n) {
    while (1) {
        n = sumDigitSquare(n);
        if (n == 1) return true;
        if (n == 4) return false;
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isHappy(n)) {
        cout << n << " is a happy number.";
    } else {
        cout << n << " is not a happy number.";
    }
    return 0;
}
