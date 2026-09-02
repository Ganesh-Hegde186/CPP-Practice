#include<iostream>
using namespace std;
 namespace Math{
int add(int a,int b){
return a+b;
}
}
namespace Physics{
int add(int a,int b){
return a+b+20;
}
}
using namespace Math;
int main(){
cout<<add(2,3)<<endl;
cout<<Physics::add(2,3);
return 0;
}
