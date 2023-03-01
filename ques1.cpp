#include <iostream>
using namespace std;
int size;
int item;
int pos;

void display(int arr[], int size) {
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void insertX(int n, int arr[], int item, int pos)
{
    int i;
    size++;
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = item;
    
}

int main ()
{
    cin>>size;int arr[size];
    for (int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    for (int j=0; j<size; j++)
    {
        if (arr[j]%2 != 0 && arr[j+1]%2 != 0)
        {
            item = ((arr[j]+arr[j+1])/2);
            insertX(size,arr,item,j);
        }
    } 
    display(arr,size);
    return 0;
}