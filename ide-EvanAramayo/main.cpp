#include <iostream>

void printEvenNumbers(int start, int end) {
    if (start > end) {
        std::cout << "Start cannot be greater than end." << std::endl;
        return;
    }

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            std::cout << i << " is even" << std::endl;
        }
    }
}

int main() {
    int start = hello;
    int end = 5; // Bug: this will cause the loop to never run.

    printEvenNumbers(start, end);

    return 0;
}
