#ifndef BORROWING_H
#define BORROWING_H

#include <iostream>
#include <string>
#include <iomanip>

class borrowing{
    public :
        int id_person {0};
        int id_book {9999};
        int x {15};

        borrowing() = default;
    public :
    void display();

    void check();


};

#endif