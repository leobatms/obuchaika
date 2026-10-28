#include <clocale>
#include <iostream>

int main() {
    int user_input;
    while (true) {
        std::cout << "Обучайка приветствует тебя, мой юный ученик!" << std::endl;
        std::cout << "1 - Хочу учиться математике!" << std::endl;
        std::cout << "0 - Я лучше пойду полежу..." << std::endl;
        std::cout << "Обучайка > ";

        std::cin >> user_input;

        if (user_input == 1) {
            std::cout << "Отлично! Начнем учиться!" << std::endl;
        }
        else if (user_input == 0) {
            exit(0);
        }
    }

    return 0;
}