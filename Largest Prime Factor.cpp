#include <iostream>
int main() {
    long num {600851475143};
    int factor {2};
    
    while (factor * factor <= num){
        if (num%factor == 0){
            num /= factor;
        }
        else{
            if (factor == 2){
                factor +=1;
            }
            else{
                factor +=2;
            }
        }
    }
    
    std::cout << num;
    return 0;
}