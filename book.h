#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <iomanip>

class book{
    public :
        int index {9999};
        std::string book_name;
        int year;
        int x = 15;

        book();

    public :
        void display();

        void check();

};


#endif