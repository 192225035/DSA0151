#include <iostream>
#include <cmath>
bool isNarcissistic(int n) {
    int numDigits = 0;
    int temp = n;
    while (temp > 0) {
        numDigits++;
        temp /= 10;
    }
    int sum = 0;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }
    return sum == n;
}
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isNarcissistic(num)) {
        std::cout << num << " is a narcissistic number." << std::endl;
    } else {
        std::cout << num << " is not a narcissistic number." << std::endl;
    }
    return 0;
}

