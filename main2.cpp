#include <iostream>
#include <string>

int main(){
    int month;
    std::cin >> month;
    int year;
    std::string viso;
    std::cin >> year;


    if(year%400==0){
        viso="YES";}
    else if(year%100==0){
        viso="NO";}
    else if(year%4==0){
        viso="YES";}
    else{
        viso="NO";
    }

    switch(month){
        case 1:
            std::cout << "31";
            break;
        case 2:
            if (viso=="YES"){
                std::cout << "29";
                break;
            }
            else{
                std::cout << "28";
                break;
            }
        case 3:
            std::cout << "31";
            break;
        case 4:
            std::cout << "30";
            break;
        case 5:
            std::cout << "31";
            break;
        case 6:
            std::cout << "30";
            break;
        case 7:
            std::cout << "31";
            break;
        case 8:
            std::cout << "31";
            break;
        case 9:
            std::cout << "30";
            break;
        case 10:
            std::cout << "31";
            break;
        case 11:
            std::cout << "30";
            break;
        case 12:
            std::cout << "31";
            break;
    }
}