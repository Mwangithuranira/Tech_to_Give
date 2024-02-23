// c plus plus program thats print numbers from 1 to 100 for
// multiples of 3, print fizz, multitiples of 5 print buzz and  for both
//  multiples of 3 and 5 print fizzbuzz.
#include <iostream>

int main() {
    for (int i = 1; i <= 100; i++) {
        bool fizz = (i % 3 == 0);
        bool buzz = (i % 5 == 0);
        if (fizz && buzz) {
            std::cout << "fizzbuzz\n";
        } else if (fizz) {
            std::cout << "fizz\n";
        } else if (buzz) {
            std::cout << "buzz\n";
        } else {
            std::cout << i << "\n";
        }
    }
    return 0;
}