#include <iostream>
int main() {
    int a {1};
    int b {2};
    int count {1};
    int sum {0};
    
    while (a < 4000000){
        int temp = b;
        b = a + b;
        a = temp;
        if (a%2 == 0){
            sum += a;
        }
        count ++;
    }

    std::cout << sum;
    return 0;
}