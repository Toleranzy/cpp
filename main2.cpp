#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    long long sum;
    if (n%2==0)
        sum = n / 2 * (n+1);
    else
        sum = ((n+1)/2) * n ;

    std::cout << sum << "\n";
}