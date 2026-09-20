#include <iostream>
using namespace std;

int main(){
    cout << "Пожалуйста, введите свое имя и возраст(затем нажмите 'enter'):\n";
    string first_name = "???";
    int age = -1;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age " << age << ")!\n";
}