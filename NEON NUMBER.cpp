#include <iostream>
#include <cmath>
bool isNeon(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 2);
        n -= digit;
        n /= 10;
    }
    return sum == n;
}
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isNeon(num)) {
        std::cout << num << " is a neon number." << std::endl;
    } else {
        std::cout << num << " is not a neon number." << std::endl;
    }
    return 0;
}
