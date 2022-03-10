//
//  sequential-search.cpp
//  sequential-search
//
//  Created by Matt Rathbun on 3/9/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int arrayValue = 0;
    int arraySize = 0;
    int search = 0;
    
    while (cout << "Enter array size between 1 and 10: " && (!(cin >> arraySize) || arraySize < 1 || arraySize > 10)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid array size" << endl;
    }
    
    int array[arraySize];
    
    for (int i = 0; i < arraySize; i++) {
        while (cout << "Enter array value " << i + 1 << ": " && !(cin >> arrayValue)) {
            cin.clear(); //clear bad input flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
            cout << "Invalid array value" << endl;
        }
        
        array[i] = arrayValue;
    }
    
    while (cout << "Enter search value: " && !(cin >> search)) {
        cin.clear(); //clear bad input flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard input
        cout << "Invalid search value" << endl;
    }
    
    int i = 0;
    
    while (i < arraySize && array[i] != search) {
        i++;
    }
    
    if (i < arraySize) {
        cout << "TOOK " << i + 1 << " ITERATION(S) TO FIND THE SEARCH VALUE" << endl;
    } else {
        cout << "DID NOT FIND SEARCH VALUE IN " << i + 1 << " ITERATIONS" << endl;
    }
    
    return 0;
}
