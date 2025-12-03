#include <iostream>

using namespace std;

int main() {
    int arr[10] = {5, 8, 12, 15, 20, 25, 0, 0, 0, 0};
    
    int n = 10;

    int left = 0;
    int right = n - 1;
    int count = 0; 

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] != 0) {
            count = mid + 1;
            left = mid + 1;      
        } 
        else {
            right = mid - 1;   
        }
    }
    cout << "Banyak Data : " << count << endl;
    return 0;
}