#include<iostream>
using namespace std;
int main(){
    char a[7] = {'V','I','B','G','Y','O','R'};
    char n;
    // cout<<"Enterthe 7 array character";
    int size=7 , i , elem, j , found=0;
    cout<<"\n Enter charcater to delete:";
        cin>>elem;
    for(i=0; i<size; i++){
        // cin>>a[i];
        
        for(i=0; i<size; i++){
            if(a[i]==elem){
                for(j=i;j<(size-1);j++){
                    a[j] = a[j+1];
                    found++;
                    i--;
                    size--;

                }

                
            }
        }
    }
    if(found==0){
        cout<<" color is not available"<<endl;

    }
    else{
        cout<<" color is available"<<endl;

    }
    return 0;



    }

