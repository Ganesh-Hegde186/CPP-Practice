#include<iostream>
#define Print(X) std::cout<<X<<std::endl;
class Player{
public:
int x,y;
int speed;
void sum(int x1,int y1){
x=x1+speed;
y=y1+speed;
std::cout<<x<<std::endl;
std::cout<<y<<std::endl;
}
};
void calc(Player &p1,int xa,int ya){
p1.x+=xa*p1.speed;
p1.y+=ya*p1.speed;
std::cout<<p1.x<<std::endl;
std::cout<<p1.y<<std::endl;
std::cout<<p1.speed<<std::endl;
}
int main(){
Player p1;
p1.x=5;
p1.y=6;
p1.speed=20;
Print(p1.x);
Print(p1.y);
Print(p1.speed);
calc(p1,1,1);
p1.sum(1,1);
calc(p1,1,1);
return 0;
}
