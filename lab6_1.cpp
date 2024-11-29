#include<iostream>
using namespace std;

int main(){
    
    int num[200];
    int i=0;
    int oddnum=0;
    int evennum=0;
    while(true){cout << "Enter an integer: ";
        
        cin>> num[i];
        
        if(num[i]==0){break;}i++;
    }
    
    for(int j=0;j<i;j++){

        
        if(num[j]%2==0){evennum++;}else{oddnum++;}
        
        
    }
    cout << "#Even numbers = "<< evennum<<endl;
    cout << "#Odd numbers = "<<oddnum;
    return 0;
}