// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int noOfLines;
    cin>>noOfLines;
    int n = noOfLines;
    
    for(int i=1;i<=n;i++){
        for(int j= noOfLines;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
        noOfLines--;
    }
    return 0;
}