//
//  main.cpp
//  smartPtrArraySum
//
//  Created by Sonia Lopchan on 10/14/24.
//
#include <iostream>
using namespace std;

int main(){
    
    int max; //maximum size of an array
    cout <<"Enter the number of elements in an array: ";
    cin >>max;
    
    unique_ptr<int[]>ptr(new int[max]); //define smart pointer for dynamic memory allocation
    
    cout << "Enter " << max << " elements: ";
    
    int i=0;
    while (i<max) { //loop iterates until i < max
        cin >> ptr[i];
        i++;
    }
    
    int sum = 0;
    i=0;
    while (i<max) {
        sum += ptr[i];
        i++;
    }
    
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}

/*
Program Output
 Enter the number of elements in an array: 5
 Enter 5 elements: 1 3 4 2 5
 Sum of array elements: 15
 Program ended with exit code: 0
*/
