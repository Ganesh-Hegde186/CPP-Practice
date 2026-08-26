#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the number:"<<endl;
cin>>a>>b;
for(int i=0;i<a;i++){
cout<<i ;
}
cout<<endl;
int j=0;
while(j<b){
cout<<j ;
j++;
}
cout<<endl;
int k=0;
do{
cout<<k ;
k++;
}
while(k<0);
cout<<endl;
return 0;
}
