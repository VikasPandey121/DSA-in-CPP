#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n-1; ++i) {
        swapped = false;
        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;  // If no swaps are made, the array is already sorted
    }
}

// Example usage:
// std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
// bubbleSort(arr);

// int main(){
//   std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
//   bubbleSort(arr);
//   for(int i=0;  i<arr.size();  i++){
//     cout<<arr[i]<<" ";
//   }
  
// }