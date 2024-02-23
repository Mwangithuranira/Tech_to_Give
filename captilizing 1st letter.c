// A c++ program that accepts a string as an input capitalize the first and then return the result string.

#include <iostream>
#include <cctype>
#include <cstring>

void capitalize_first_letter_of_each_word(char *str) {
    if (str != nullptr && *str != '\0') {
        *str = std::toupper(*str);
        for (char *p = str + 1; *p != '\0'; p++) {
            if (std::isspace(*(p - 1)) && !std::isspace(*p)) {
                *p = std::toupper(*p);
            } else {
                *p = std::tolower(*p);
            }
        }
    }
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, sizeof(str));
    capitalize_first_letter_of_each_word(str);
    std::cout << "Result: " << str << std::endl;
    return 0;
}