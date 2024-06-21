#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){return factorial=factorial*i;}
    
}
int combination(int n,int r){
return fact(n)/(fact(n-r)*fact(r));}

 

int main(){
    int n;
    cin>>n;
    
   cin>> r;
    cout<<   combination(n,r);
    
    
}






