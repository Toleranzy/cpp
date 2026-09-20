#include <iostream>
using namespace std;

int main(){
    cout << "Пожалуйста, введите свое имя и возраст(затем нажмите 'enter'):\n";
    string first_name;
    int age;
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << " (age " << age << ")!\n";
}