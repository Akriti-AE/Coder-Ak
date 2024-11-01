#include <iostream>
using namespace std;

int main() {
    int a[6] = {-4,6,2,-1,2,-3};
    int n = sizeof(a)/sizeof(a[0]);
    int sum = 0;
    int max_sum = 0;
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n-i; j++){
            for(int k = 0; k<i; k++){
                sum = sum + a[j+k];
            }
            if(sum > max_sum){
                max_sum = sum;
            }
            sum = 0;
        }
    }
    cout<<max_sum;

    return 0;
}
