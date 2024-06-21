#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++)  fact=fact*i;
    return fact;
 }
 int combination(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
 }
int main(){
int n;
cout<<"number1: ";
cin>> n;

for(int i=0;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
        cout<< combination(i,j)<<' ';
    } cout<<endl;
}
    
}






