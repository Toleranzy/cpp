#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    char x;
    std::vector<char> password;

    while (std::cin.get(x)) {
        if (x == '\n') break;
        password.push_back(x);
    }

    bool is_valid = std::all_of(password.begin(), password.end(),
        [](unsigned char c) {
            return c >= 33 && c <= 126;
        });

    int value = 0;

    for (size_t i = 0; i != password.size(); ++i) {
        value = value + 1;
    }

    if (value >= 8 && value <= 14) {

        if (is_valid) {

            bool is_bigger = std::any_of(password.begin(), password.end(),
                [](unsigned char c) {
                    return c >= 65 && c <= 90;
                });

            bool is_lower = std::any_of(password.begin(), password.end(),
                [](unsigned char c) {
                    return c >= 97 && c <= 122;
                });

            bool is_number = std::any_of(password.begin(), password.end(),
                [](unsigned char c) {
                    return c >= 48 && c <= 57;
                });


            if (is_bigger && is_lower && is_number) {
                std::cout << "Есть 3 или более разных символов." << std::endl;
            }

            std::cout << "Все символы входят в диапазон 33-126." << std::endl;
        }
        else {
            std::cout << "Есть символы вне диапазона!" << std::endl;
        }
    }
    else {
        std::cout << "Пароль не содержит нужного числа символов\n";
    }

    return 0;
}