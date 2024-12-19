#include <iostream>
//Эта программа приветствует пользователя по имени
int main() {
    std::string name;
    std::count << "Enter your name: "; //Просим пользователя ввести его имя
    std::cin  >> name;
    std::count << "Hello world from " << name << endl; //Приветствуем пользователя
    return 0;
}