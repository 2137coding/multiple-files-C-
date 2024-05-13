#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "person.h"
#include "book.h"
#include "borrowing.h"
#include "func.h"


int main(){
    std::vector<person> a;
    std::vector<book> b;
    std::vector<borrowing> c;
    std::string command;
    std::cout << "add - to add person to the list" << std::endl;
    std::cout << "list -  to see list of persons" << std::endl;
    std::cout << "adults - to see list of adults" << std::endl;
    std::cout << "kids - to see list of kids" << std::endl;
    std::cout << "erase - to erase person from the list" << std::endl;
    std::cout << "change_to_books - to change to books" << std::endl;
    std::cout << "change_to_borrowing - to change to borrows" << std::endl;
    std::cout << "change_to_person - to change to persons" << std::endl;
    std::cout << "end - to end program" << std::endl;
    while(std::cin >> command && command != "end"){
        if(command == "add"){
            add(a);
            index(a);
        }else if(command == "list"){
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            list(a);
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
        }else if(command == "adults"){
            adults(a);
        }else if(command == "kids"){
            kids(a);
        }else if(command == "erase"){
            erase_person(a,c);
            index(a);
        }
            std::cout << "add - to add person to the list" << std::endl;
            std::cout << "list -  to see list of persons" << std::endl;
            std::cout << "adults - to see list of adults" << std::endl;
            std::cout << "kids - to see list of kids" << std::endl;
            std::cout << "erase - to erase person from the list" << std::endl;
            std::cout << "change_to_books - to change to books" << std::endl;
            std::cout << "change_to_borrowing - to change to borrows" << std::endl;
            std::cout << "end - to end program" << std::endl;
        if(command == "change_to_books"){
            std::cout << "add - to add book to the list" << std::endl;
            std::cout << "list -  to see list of books" << std::endl;
            std::cout << "erase - to erase book from the list" << std::endl;
            std::cout << "change_to_person - to change to persons" << std::endl;
            std::cout << "change_to_borrowing - to change to borrows" << std::endl;
            std::cout << "end - to end program" << std::endl;
            while(std::cin >> command && command != "change_to_persons" && command != "change_to_borrowing"){
                if(command == "add"){
                    add(b);
                    index(b);
                }else if(command == "list"){
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    list(b);
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;

                }else if(command == "erase"){
                    erase(b);
                    index(a);
                }
            }
        }
        if(command == "change_to_borrowing"){
             std::cout << "add - to add borrow to the list" << std::endl;
            std::cout << "list -  to see list of borrows" << std::endl;
            std::cout << "erase - to erase borrow from the list" << std::endl;
            std::cout << "change_to_books - to change to books" << std::endl;
            std::cout << "change_to_person - to change to persons" << std::endl;
            std::cout << "end - to end program" << std::endl;
            while(std::cin >> command && command != "change_to_person" && command != "change_to_books"){
            get_id(a,c);
            if(command == "add"){
               add_id(c,a,b);
            }else if(command == "list"){
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
                for(size_t i {0}; i < c.size();++i){
                    c[i].display();
                }
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
            }else if(command == "erase"){
                erase_borrow(c);
            }
        }
        }

    }
    return 0;
}

