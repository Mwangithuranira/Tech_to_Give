//a program to generate reversed interger when a given integer is inserted.
#include <iostream>

int reverse_digits(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Reversed: " << reverse_digits(n) << std::endl;
    return 0;
}