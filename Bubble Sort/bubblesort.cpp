#include <iostream>
#include <algorithm>
#include <array>
/*Name: FanFreak247
Date: 12/18/2017
Purpose: To sort an array of values using the bubble sorting algorithm.
Environment: Code::Blocks 16.01 Windows 7 x64 GNU GCC Compiler
*/

//Code uses a template so that you can use generic values. Goes through values of array n^n times and sorts values.
template <class T>
//The function uses references so it doesn't actually just copy the array, and changes what is inside it.
void sort_arr(T& arr) {
     for (auto &a : arr) {
        for (auto &b: arr) {
            if (a < b) {
                std::swap(a,b);
        }
    }
  }
}
int main() 
    std::array<int,6> boi = {4,4,5,3,2,1};
    sort_arr(boi);
    //Auto datatype just guesses type.
    for (auto a : boi) {
        std::cout << a << "\n";
    }
    return 0;
}
