#include<iostream>
using namespace std;

bool isHarshad(int n) {
    int sum = 0, temp = n;
    while (temp!= 0) {
        sum += temp % 10;
        temp = temp / 10;
    }
    return (n % sum == 0);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isHarshad(n)) {
        cout << n << " is a Harshad number.";
    } else {
        cout << n << " is not a Harshad number.";
    }
    return 0;
}
