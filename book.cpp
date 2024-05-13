#include "book.h"

book::book(){
            std::cout << "type name of book" << std::endl;
            std::cin >> book_name;
            std::cout << "Type year of relase" << std::endl;
            std::cin >> year;
    }


void book:: display(){
            std::cout << std::setw(x) << book_name << std::setw(x) << year << std::endl;
    }
void book:: check(){

    };