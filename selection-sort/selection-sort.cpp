//
//  selection-sort.cpp
//  selection-sort
//
//  Created by Matt Rathbun on 3/5/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int arrayValue = 0;
    int arraySize = 0;
    int min = 0;
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
        min = k;

        for (int l = k + 1; l <= arraySize - 1; l++) {
            if (unsortedArray[l] < unsortedArray[min]) {
                min = l;
            }
        }

        temp = unsortedArray[k];
        unsortedArray[k] = unsortedArray[min];
        unsortedArray[min] = temp;

        cout << "ITERATION " << k + 1 << endl;
        cout << "SWAP POSITIONS " << k << " AND " << min << endl;

        for (int k = 0; k < arraySize; k++) {
            cout << unsortedArray[k];

            if (k < arraySize - 1) {
                cout << ", ";
            }
        }

        cout << endl << endl;
    }

    return 0;
}
