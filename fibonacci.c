// A program to generate the fibonacci sequence upto 100.
#include <iostream>

int main() {
    int a = 0;
    int b = 1;
    int next;

    do {
        std::cout << a;
        next = a + b;
        a = b;
        b = next;
    } while (next < 100);

    return 0;
}