#include<iostream>
using namespace std;
int main(){
int A,n,r,i;
cout<<"Enter n number:";
cin>>n;
cout<<"Enter r number:";
cin>>r;
A=n-r;
int fact1=1,fact2=1,fact3=1;
for(i=1;i<=n;i++){
    fact1=fact1*i;
}
cout<<"fact1 = "<<fact1<<endl;
for(i=1;i<=r;i++){
    fact2=fact2*i;
}
cout<<"fact2 = "<<fact2<<endl;
for(i=1;i<=A;i++){
    fact3=fact3*i;
}
cout<<"fact3 = "<<fact3<<endl;
int nCr=fact1/(fact2*fact3);
cout<<"Result = "<<nCr;
return 0;
}
