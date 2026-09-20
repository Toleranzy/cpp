#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Пожалуйста, введите значение с плавающей точкой: ";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nтри раза по n == " << 3*n
         << "\nдва раза по n == " << n+n
         << "\nn в квадрате == " << n*n
         << "\nполовина n== "   << n/2
         << "\nквадратный корень из n == " << sqrt(n)
         << endl;
}