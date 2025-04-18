#include<bits/stdc++.h> // including all standard libraries
using namespace std; // using standard namespace
// Function to perform binary search on a sorted array
int main(){
    int n; // declaring n variable to store the size of the dynamic array
    cout << "Enter the size of the array: ";
    // Taking input for the size of the array
    cin >> n;
    cout << "Enter the key value: ";
    int key; // declaring key variable to store the value to be searched
    // Taking input for the key value
    cin >> key;

    cout << "Enter the elements of the array: ";
    vector<int> arr(n); // Using vector for dynamic array size
    for(int i=0;i<n;i++){ //for loop to take input of array elements
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];// taking input of array elements
    }
    for(int i=0;i<n;i++){// for loop to search the key in the array
        if(arr[i] == key){ 
            cout << "Key found at index: " << i << endl;
            return 0;
        }
    }
}