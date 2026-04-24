//1*n+2*(n-1)+....+n*1
#include<iostream>
using namespace std;
int main(){
int n,i,sum=0;
cout<<"Enter a number:";
cin>>n;
for(i=1;i<=n;i++){  //sum=(n*(n+1)*(n+2))/6;
   sum=sum+i*(n-i+1);
}
cout<<"sum = "<<sum;
return 0;
}
