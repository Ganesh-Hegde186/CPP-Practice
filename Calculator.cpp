#include<iostream>
using namespace std;
int main(){
float a,b,c;
cout<<"Enter the two number:";
cin>>a>>b;
cout<<"Enter your choice:\n";
cout<<"Choices are:\n";
cout<<"1.Addition\n";
cout<<"2.Subtraction\n";
cout<<"3.Multiplication\n";
cout<<"4.Division\n";
cin>>c;
if(c==1)
cout<<"Addition:"<< a+b<<"\n";
else if(c==2)
cout<<"Subtraction:"<< a-b<<"\n";
else if(c==3)
cout<<"Multiplicaion:"<< a*b<<"\n";
else if(c==4)
cout<<"Division:"<< a/b<<"\n";
else
cout<<"Choice is Invalid\n";
return 0;
}
