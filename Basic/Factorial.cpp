// Factorial of a number 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int fact = 1;
    if (n==1 or n==0){
        cout<<"factorial is "<<n;
        return 0;
    }
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}