// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int countCharacters(const std::string& str) {
    return str.size();
}

int main() {
    std::string inputString;

    std::getline(std::cin, inputString);

    int characterCount = countCharacters(inputString);

    std::cout << "Кількість символів у рядку: " << characterCount << std::endl;

    return 0;
}