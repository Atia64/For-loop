#include<iostream>
using namespace std;
int main(){
int i,j,k,n;
cout<<"Enter a number:";
cin>>n;
for(i=n;i>=1;i--){
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
       for(k=1;k<=i;k++){
        cout<<k;
       }
         for(k=i-1;k>=1;k--){
            cout<<k;
         }
       cout<<endl;
}
return 0;
}

