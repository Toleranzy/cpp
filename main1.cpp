#include <iostream>
using namespace std;

int main(){
    cout << "Пожалуйста, введите свое имя и отчество(затем нажмите 'enter'):\n";
    string first;
    string second;
    cin >> first >> second;
    cout << "Hello, " << first << ' ' << second << '\n';
}