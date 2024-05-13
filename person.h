#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <iomanip>

class person{
    public :
        int age;
        std::string name;
        std::string surname;
        bool adult;
        int index {0};
        int x = 15;
    
    public:
        person();

    public : 
        void check();
 
        void display();
  

};


#endif