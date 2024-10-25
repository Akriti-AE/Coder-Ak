#include <iostream>
using namespace std;
int main() {
    int arr[6] = {3,4,5,9,12,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    for(int i =0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    cout<<max<<" "<<min;

    return 0;
}
