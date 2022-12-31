// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int noOfLines;
    cin>>noOfLines;
  
    for(int i=1;i<=noOfLines;i++){
        for(int j=1;j<=noOfLines;j++){
            if(j<=noOfLines-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}