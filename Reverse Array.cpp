#include <iostream>
using namespace std;
int main() {
    int arr[5] = {3,4,5,12,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    for(int k = 0; k<n; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
