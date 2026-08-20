#include<iostream>

int Multiply(int a,int b){
return a*b;
}
void Print(int a,int b){
std::cout<<"Result:"<<Multiply(a,b)<<std::endl;
}
int main(){
Print(9,5);
Print(6,4);
return 0;

}
