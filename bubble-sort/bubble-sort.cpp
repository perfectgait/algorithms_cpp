//
//  main.cpp
//  selection-sort-cpp
//
//  Created by Matt Rathbun on 3/5/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int arrayValue = 0;
    int arraySize = 0;
    int min = 0;
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
        min = k;

        for (int l = k + 1; l <= arraySize - 1; l++) {
            if (unsortedArray[l] < unsortedArray[min]) {
                min = l;
            }
        }

        temp = unsortedArray[k];
        unsortedArray[k] = unsortedArray[min];
        unsortedArray[min] = temp;

        std::cout << "INTERATION " << k + 1 << std::endl;
        std::cout << "SWAP POSITIONS " << k << " AND " << min << std::endl;

        for (int k = 0; k < arraySize; k++) {
            std::cout << unsortedArray[k];

            if (k < arraySize - 1) {
                std::cout << ", ";
            }
        }

        std::cout << std::endl << std::endl;
    }

    return 0;
}
