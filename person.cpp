#include "person.h"

person:: person(){
            std::cout << "Type your name" << std::endl;
            std::cin >> name;
            std::cout << "Type your surname" << std::endl;
            std::cin >> surname;
            std::cout << "Type your age" << std::endl;
            std::cin >> age;
        }
void person:: check(){
            if(age <= 18){
                adult = false;
            }else{
                adult = true;
            }
        }

void person:: display(){
            if(adult == true){
                std::cout << std::setw(x) << name << "  " << std::setw(x) << surname << "  " << std::setw(x) <<  "adult" << std::endl;
            }else{
                std::cout << std::setw(x) << name << "  " << std::setw(x) << surname << "  " << std::setw(x) << "child" << std::endl;
            }
        }