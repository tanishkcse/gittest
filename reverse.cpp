#include<iostream>
using namespace std;
int main(){
    int n ,  digit;
    int reverse_number=0;
    cout<<"enter any number\n";
    cin>>n;
    while(n!=0){
     digit= n%10;
     reverse_number= reverse_number*10+digit;
     n=n/10;

    }
       cout<<"reverse number: "<<reverse_number;
       return 0;
    }
    
