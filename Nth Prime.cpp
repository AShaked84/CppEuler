#include <iostream>

int isPrime(int num);

int main() {
    int num{10001};
    int i{0};
    int counter{0};
    
    while (counter < num){
        i++;
        if (isPrime(i)){
            counter++;
        }
    }
    
    std::cout << i << std::endl;
    return 0;
}

int isPrime(int num){
    if (num <= 1){
        return false;
    }
    
    int j{2};
    
    while (j*j <= num){
        if (num%j == 0){
            return false;
        }
        j++;
    }
    return true;
}

