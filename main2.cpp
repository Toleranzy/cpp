#include <iostream>
#include <string>
#include <sstream>

int main(){
    std::string c;
    std::getline(std::cin, c);

    std::stringstream ss(c);
    double number;
    double sum = 0;

    while (ss >> number){
        sum += number;
    }

    std::cout << sum << "\n";
}