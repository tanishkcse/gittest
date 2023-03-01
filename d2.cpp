#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n]={0};
    int b[n]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j=0;
    if(a[0]!=0)
    {
        b[j++]=a[0];
    }
    else
    {
        cout << "Invalid Input";
        return 0;
    }
    for(int i = 1; i < n; i++)
    {
        if(a[i]!=0)
        {
            if(a[i]!=a[i-1])
            {
                b[j++]=a[i];
            }
        }
        else
        {
            cout << "Invalid Input";
            return 0;
        }
    }
    for(int i = 0; i < j; i++)
    {
        cout << b[i] << " ";
    }
    
    return 0;
}