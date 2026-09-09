#include<iostream>
struct Entity{
static int x,y;
static void print(){
std::cout<<x<<","<<y<<std::endl; 
}
};
int Entity::x;
int Entity::y;

int main(){

Entity::x=4;
Entity::y=5;

Entity::x=3;
Entity::y=7;
Entity::print();
Entity::print();
return 0;
}
