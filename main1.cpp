#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string previous = '';

    string current;
    while (cin>>current){
        if (previous == current)

        cout << "повторяющееся слово: " << current << '\n';
        previous = current;
    }
}