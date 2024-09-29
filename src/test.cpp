#include <iostream>

int hello(int* x) {
    
    return *x;
}

int main() {

    int y = 10;

    std::cout << &y << "\n";

    std::cout << hello(&y) << '\n';

    return 0;
}