// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            count=0;
        }
        else{
            count=1;
        }
        for(int j=1;j<=i;j++){
            if(count==1){
                cout<<count;
                count--;
            }
            else if(count==0){
                cout<<count;
                count++;
            }
        }
        cout<<endl;
    }

    return 0;
}