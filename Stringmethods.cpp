#include<iostream>
int main(){
std::string s1="Ganesh";
s1+="Hegde";
std::cout<<s1<<std::endl;
std::cout<<s1.length()<<std::endl;
std::cout<<s1.substr(6)<<std::endl;
std::cout<<s1.substr(2,5)<<std::endl;
s1.find("Hegde");
s1.find("z");
if(s1.find("Hegde")!=std::string::npos){
std::cout<<"found it"<<std::endl;
}
s1.replace(6,2,"love");
std::cout<<s1<<std::endl;
return 0;
}
