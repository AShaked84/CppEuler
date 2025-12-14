#include <iostream>
int main() {
    int maxNum {999};
    bool found {false};
    int largest {0};
    
    for (int i = maxNum; i > 10; i--){
        for (int j = maxNum; j > 10; j--){
            std::string numStr = std::to_string(i*j);
            std::string reversedStr(numStr.rbegin(), numStr.rend());
            
            if (numStr == reversedStr && i*j > largest){
                largest = i*j;
            }
        }
    }
    
    std::cout << largest;
    return 0;