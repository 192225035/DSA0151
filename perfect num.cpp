#include<iostream>
using namespace std;
bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (n == sum);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPerfect(n)) {
        cout << n << " is a perfect number.";
    } else {
        cout << n << " is not a perfect number.";
    }
    return 0;
}
