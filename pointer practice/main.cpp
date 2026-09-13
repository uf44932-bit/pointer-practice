

#include <iostream>
#include <vector>


using namespace std;

int main() {
  
    //Two Integers
    /*
     Write a program that asks the user to enter two integers to be stored in the variables a and b. Assign the addresses of a and b to ptr_a and ptr_b. Then, print out the dereferenced values of ptr_a and ptr_b to the console.
     */
    
    int a;
    int b;
    
    cout << "Enter a integer for a: ";
    cin >> a;
    
    cout << "Enter a integer for b: ";
    cin >> b;
    
    int* ptr_a = &a;
    int* ptr_b = &b;
    
    cout << *ptr_a << endl;
    cout << *ptr_b << endl;
    
    
    // Maximum Arrays
    /*
     Write a program to find the maximum number in an unsorted list of integers.

     Create an integer array (int[]) that contains some number of random, unsorted values. You might make the values up yourself or use rand(). Then, create a pointer called max_ptr that finds and points to the maximum value in the list.

     Hint: since this is an unsorted list of integers, you will need to make use of linear search to find the maximum rather than binary search.
     */
    
    int arr[5] = { 1, 3, 2, 5, 4};
    
    int* max_ptr = arr;
    
    for (int* ptr= arr; ptr < arr + 5; ptr++) {
        if (*ptr > *max_ptr) {
            max_ptr = ptr;
        }
    }
    
    cout << "The Maximum is: " << *max_ptr << endl;
    
    
    //length of a c-style string
    /*
     Write a program to calculate the length of a string using a pointer.

     Create a C-style string which is an array of chars. Then, create a pointer that points to the start of the array. Move the pointer through the string until you reach the null character \0, and then print out how many cells it visited.
     */
    
    return EXIT_SUCCESS;
}
