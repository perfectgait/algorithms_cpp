//
//  bubble-sort.cpp
//  bubble-sort
//
//  Created by Matt Rathbun on 3/8/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int arrayValue = 0;
    int arraySize = 0;
    int temp = 0;
    
    while (cout << "Enter array size between 1 and 10: " && (!(cin >> arraySize) || arraySize < 1 || arraySize > 10)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid array size" << endl;
    }
    
    int unsortedArray[arraySize];
    
    for (int i = 0; i < arraySize; i++) {
        while (cout << "Enter array value " << i + 1 << ": " && !(cin >> arrayValue)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid array value" << endl;
        }
        
        unsortedArray[i] = arrayValue;
    }

    cout << endl << "INITIAL ARRAY" << endl;

    for (int j = 0; j < arraySize; j++) {
        cout << unsortedArray[j];
        
        if (j < arraySize - 1) {
            cout << ", ";
        }
    }

    cout << endl << endl;
    
    for (int k = 0; k <= arraySize - 2; k++) {
        cout << "ITERATION " << k + 1 << endl;
        
        for (int l = 0; l <= arraySize - 2 - k; l++) {
            if (unsortedArray[l + 1] < unsortedArray[l]) {
                temp = unsortedArray[l + 1];
                unsortedArray[l + 1] = unsortedArray[l];
                unsortedArray[l] = temp;
                
                cout << "SWAP POSITIONS " << l + 1 << " AND " << l <<endl;
            }
        }

        for (int m = 0; m < arraySize; m++) {
            cout << unsortedArray[m];

            if (m < arraySize - 1) {
                cout << ", ";
            }
        }

        cout << endl << endl;
    }

    return 0;
}
