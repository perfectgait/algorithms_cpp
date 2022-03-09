//
//  bubble-sort.cpp
//  bubble-sort-cpp
//
//  Created by Matt Rathbun on 3/8/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int arrayValue = 0;
    int arraySize = 0;
    int temp = 0;
    
    while (std::cout << "Enter array size between 1 and 10: " && (!(std::cin >> arraySize) || arraySize < 1 || arraySize > 10)) {
        std::cin.clear(); //clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
        std::cout << "Invalid array size" << std::endl;
    }
    
    int unsortedArray[arraySize];
    
    for (int i = 0; i < arraySize; i++) {
        while (std::cout << "Enter array value " << i + 1 << ": " && !(std::cin >> arrayValue)) {
            std::cin.clear(); //clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
            std::cout << "Invalid array value" << std::endl;
        }
        
        unsortedArray[i] = arrayValue;
    }

    std::cout << std::endl << "INITIAL ARRAY" << std::endl;

    for (int j = 0; j < arraySize; j++) {
        std::cout << unsortedArray[j];
        
        if (j < arraySize - 1) {
            std::cout << ", ";
        }
    }

    std::cout << std::endl << std::endl;
    
    for (int k = 0; k <= arraySize - 2; k++) {
        std::cout << "ITERATION " << k + 1 << std::endl;
        
        for (int l = 0; l <= arraySize - 2 - k; l++) {
            if (unsortedArray[l + 1] < unsortedArray[l]) {
                temp = unsortedArray[l + 1];
                unsortedArray[l + 1] = unsortedArray[l];
                unsortedArray[l] = temp;
                
                std::cout << "SWAP POSITIONS " << l + 1 << " AND " << l <<std::endl;
            }
        }

        for (int m = 0; m < arraySize; m++) {
            std::cout << unsortedArray[m];

            if (m < arraySize - 1) {
                std::cout << ", ";
            }
        }

        std::cout << std::endl << std::endl;
    }

    return 0;
}
