#include <iostream>

int main(){
    int n;
    std::cin >> n;
    
    double sum = 0.0;
    for (int i = 1; i <= n; ++i){
        double sign = 2 * (i%2)-1;
        sum += sign / i;
    }
    std::cout << sum << "\n";
}