#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows";
    cin>>n;
    cout<<"Enter the number of columns";
    cin>>m;
    
    for(int i=1;i<=n;i++){
        int p=65;
        for(int j=1;j<=m;j++){
            
            char a=(char)p;
            cout<< a<<" ";
            p++;
        }
        cout<<endl;
    }
    
}






