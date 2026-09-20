#include <iostream>
using namespace std;

int main(){
    cout << "Пожалуйста, введите свой возраст(затем нажмите 'enter'):\n";
    double first;
    double second;
    cin >> first;
    second = first * 12;
    cout << "Hello, ваш возраст в месяцах: " << second << "\n";
}