#include<iostream>
using namespace std;
int main(){
int p = 10;
int *x=&p;
cout<<p<<"\n";
cout<<x<<"\n";
cout<<*x<<"\n";
*x=30;
cout<<p<<"\n";
cout<<*x<<"\n";
return 0;
}
