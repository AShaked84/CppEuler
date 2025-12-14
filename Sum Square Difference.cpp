#include <iostream>

// main function (entry point of the program)
int main() {
    int maxNum{100};
    int sqrsum{0};
    int sumsqr{0};
    
    for (int i = 1; i <= maxNum; i++){
        sqrsum += i*i;
        sumsqr += i;
    }
    
    std::cout << sumsqr*sumsqr - sqrsum << std::endl;
    return 0;
}