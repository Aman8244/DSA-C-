// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int num1;
    cout<<"Input any Number"<<endl;
    cin>>num1;
    for(int i=2;i<num1;i++){
        if(num1==1 || num1==2){
            cout<<"Prime Number"<<endl;
            break;
        }
        else if(num1 % i==0){
            cout<<" not Prime Number"<<endl;
            break;
        }
        else{
            cout<<"prime no"<<endl;
            break;
        }
    }
    
    return 0;
}