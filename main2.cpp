#include <iostream>
#include <iomanip>

int main(){
     int n;
     int k;
     std::cin >> n >> k;

     int pos = n;

     for (int i = 1; i < n; ++i){
        std::cout << "   ";
     }
     for (int d = 1; d<=k; ++d){
        std::cout << std::setw(2) << d;

        if(d == k || pos == 7){
            std::cout << "\n";
            pos = 1;
        }
        else{
            std::cout << " ";
            ++pos;
        }
     }
}