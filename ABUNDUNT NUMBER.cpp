#include <iostream>
#include <vector>
int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}
bool isAbundant(int n) {
    return sumOfDivisors(n) > n;
}
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isAbundant(num)) {
        std::cout << num << " is an abundant number." << std::endl;
    } else {
        std::cout << num << " is not an abundant number." << std::endl;
    }
    return 0;
}
