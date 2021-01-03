#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    for(int i=1; i<=t;i++){
    int fact=1;
    cin>>n;
    for(int i=1; i<=n;i++){
    fact= fact*i;
    }
    cout<<fact<<endl;
    }

}
