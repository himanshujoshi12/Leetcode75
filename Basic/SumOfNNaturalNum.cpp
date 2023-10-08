// Find the sum of first 'N' natural Numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number upto which you want to print the sum"<<endl;
    cin>>n;
    int sum = 0 ;
    for(int i = 0 ; i <= n ; i++){
        sum += i;
    }
    cout<<"The sum upto N terms is "<<sum;

}
