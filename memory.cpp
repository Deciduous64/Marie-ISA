//
//  main.cpp
//  MARIE_ISA_tmp
//
//  Created by Daniel Allison on 2015-11-20.
//  Copyright © 2015 Daniel Allison. All rights reserved.
//

#include <iostream>
#define capacity 4096

class memory {
private:
    int array [capacity - 1] = {0};

public:
    
    int Read (int key) {
        if (array[key] != NULL || (0 <= key && key < capacity)) {
            return (array[key]);
        }
        else return NULL;
    }
    
    void Write (int key, int value) {
        if (0 <= key && key < capacity) {
            value = BinaryToDecimal(value);
            array[key] = value;
        }
    }
};

int main(int argc, const char * argv[]) {
    memory Memory;
    
    int bit;
    std::cout << "Enter a binary integer: ";
    std::cin >> bit;
    int output = Memory.BinaryToDecimal(bit);
    std::cout << output << std::endl;
    
    int dec;
    std::cout << "Enter a decimal integer: ";
    std::cin >> dec;
    output = Memory.DecimalToBinary(dec);
    std::cout << output << std::endl;
    
    std::cout << "Enter a key to write to: ";
    int key;
    std::cin >> key;
    std::cout << "Enter a value: ";
    int value;
    std::cin >> value;
    
    Memory.Write(key, value);
    
    std::cout << "Enter a key to be read from: ";
    std::cin >> key;
    
    std::cout << Memory.Read(key) << std::endl;
}
