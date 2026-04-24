#include<iostream>
#include<cmath>
using namespace std;
int main(){
int i,j,n;
long long sum=0;
cout<<"Enter a number:";
cin>>n;
/*for(i=1;i<=n;i++){
    sum=sum+pow(i,i);
}
*/
for(i=1;i<=n;i++){
    int power=1;
    for(j=1;j<=i;j++){
        power=power*i;
    }
   sum=sum+power;
}
cout<<sum;
return 0;
}
