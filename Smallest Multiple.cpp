#include <iostream>
#include <vector>
#include <numeric>

// Function Declaration
long long GCD(long long a, long long b);

// main function (entry point of the program)
int main() {
    std::vector<int> numberList(20); 
    std::iota(numberList.begin(), numberList.end(), 1);
    long long lcm {1};
    
    for (const int& num : numberList){
        int gcd = GCD(num, lcm);
        lcm = (lcm * num)/gcd;
    }
    
    std::cout << lcm << std::endl;
    return 0;
}

// Function Definition
long long GCD(long long a, long long b) {
    while (b != 0){
        long long temp {b};
        b = a%b;
        a = temp;
    }
    return a;
}
