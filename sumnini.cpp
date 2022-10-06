#include<iostream>
using namespace std;
int main()
{
int i, sum=0;
for(i=2;i<=10;i=i+2){
cout<<i<<"";
sum=sum+i;
}
cout<<"Total sum"<<sum;
return 0;
}