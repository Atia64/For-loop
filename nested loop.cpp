#include<iostream>
using namespace std;
int main(){
int n,i,j,k;
int num=1;
long long totalsum=0;
cout<<"Enter a number:";
cin>>n;
for(i=1;i<=n;i++){
   long long termsum=0;
   for(j=1;j<=i;j++){
    long long product=1;
   for(k=1;k<=j;k++){
        product=product*num;
      num++;
   }
   termsum=termsum+product;
}
totalsum=totalsum+termsum;
}
cout<<"sum = "<<totalsum;
return 0;
}
