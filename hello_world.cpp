#include <iostream>
//Эта программа приветствует пользователя по имени
int main() {
    std::string name;
    std::count << "Enter your name: "; //Просим пользователя ввести имя
    std::cin  >> name; //Считываем имя пользователя
    std::count << "Hello world from " << name << endl; //Приветствуем пользователя
    return 0;
}

