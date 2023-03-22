#include <iostream>

void print_to_98(int n) {
    if (n <= 98) {
        for (int i = n; i <= 98; ++i) {
            std::cout << i;
            if (i != 98) {
                std::cout << ", ";
            }
        }
    } else {
        for (int i = n; i >= 98; --i) {
            std::cout << i;
            if (i != 98) {
                std::cout << ", ";
            }
        }
    }
    std::cout << "\n";
}

