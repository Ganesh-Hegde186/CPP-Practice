#include<iostream>
void Increment(int& value){
value++;
std::cout<<value<<std::endl;
}
int main(){
int a;
a=5;
Increment(a);

return 0;
}
