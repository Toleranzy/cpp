#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout << "Введите два имени\n";
    string first;
    string second;
    cin >> first >> second;
    if (first == second) cout << "имена совпадают\n";
    if (first < second)
        cout << first << " по алфавиту предшествует " << second << endl;
    if (first > second)
        cout << first << " по алфавиту следует за " << second << endl;
}