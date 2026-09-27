#include <iostream>


int main(){
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;
    if (a>=b+c || b>=c+a || c>=b+a){
        std::cout <<"UNDEFINED";}
    else if (a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b)){
        std::cout <<"YES";}
    else{
        std::cout <<"NO";
    }
    
}