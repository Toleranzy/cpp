#include <iostream>

int main(){
    long long a;
    int c=0;
    std::cin >> a;
    while (a != 0){
        c=c+(a%10);
        a=a/10;
    }
    std::cout << c;
}