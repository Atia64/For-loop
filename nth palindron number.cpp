#include<iostream>
using namespace std;
int main(){
long long n;
int remainder,num,i;
cout<<"Enter a number:";
cin>>n;
for(i=1;i<=n;i++){
    num=i;
    int reverse=0;
    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    if(i==reverse){
        cout<<i<<"  ";
    }
}
return 0;
}
