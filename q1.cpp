#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,average;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]%2!=0 && arr[i]%2!=0){
            cout<<arr[i]<<endl;
            average = (arr[i-1]+arr[i])/2;
            for(int j=n-1;j>=i;j--){
                arr[j+1] = arr[j];
            }
            arr[i] = average;
            
            i++;
            n++;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}