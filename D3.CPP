#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
     char arr[7]={'V','I','B','G','Y','O','R'},size=7, elem;
    int i,j, found=0;
   
    //cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<size; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(size-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            size--;
        }
    }
    if(found==0)
        cout<<"Color not available";
    else
   for(i=0;i<6;i++)
   {
       cout<<arr[i];
   }
    return 0;
}