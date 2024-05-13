#ifndef FUNC_H
#define FUNC_H

#include <vector>
#include "person.h"
#include "book.h"
#include "borrowing.h"

template <typename T>
void add(std::vector<T>& a);
template <typename T>
void list(std::vector<T>& a);
void adults (std::vector<person>& a);
void kids(std::vector<person>& a);
template <typename T>
void index(std::vector<T>& b);
void get_id(std::vector<person>& a,std::vector<borrowing>& c);
void add_id(std::vector<borrowing>& c,std::vector<person>& a, std::vector<book>& b);
template <typename T>
void erase(std::vector<T>& a);
void erase_person(std::vector<person>& a,std::vector<borrowing>& c);
void erase_borrow(std::vector<borrowing>& c);



template <typename T>
void add(std::vector<T>& a){
    T news;
    a.push_back(news);
}

template <typename T>
void list(std::vector<T>& a){
    for(size_t i {0}; i < a.size();++i){
        a[i].check();
        std::cout << "ID : " <<  (i) << "  ";
        a[i].display();
    }
}

void adults(std::vector<person>& a){
    for(size_t i {0}; i < a.size();++i){
        a[i].check();
        if(a[i].adult){
            std::cout << "index : " <<  (i+1) << "  ";
        a[i].display();
        }
    }
    }

    void kids(std::vector<person>& a){
        for(size_t i {0}; i < a.size();++i){
            a[i].check();
            if(a[i].adult == false){
                std::cout << "index : " <<  (i+1) << "  ";
                a[i].display();
            }
        }
    }

template <typename T>
void index(std::vector<T>& b){
    for(size_t i {0}; i < b.size();++i){
        b[i].index = i;
    }
}


void get_id(std::vector<person>& a, std::vector<borrowing>& c){
    std::vector<borrowing>::iterator y = c.begin();
    borrowing x;
    if(c.size() == 0){
    for(size_t i {0}; i < a.size();++i){
        c.push_back(x);
    }
    for(size_t i {0}; i < a.size();++i){
        c[i].id_person = a[i].index;
        
    }
    }
    if(c.size() != a.size()){
        while(c.size() < a.size()){
            c.push_back(x);
            
        }
    }
    for(size_t i {0}; i < a.size();++i){
        c[i].id_person = a[i].index;
        
    }
    
}


void add_id(std::vector<borrowing>& c, std::vector<person>& a, std::vector<book>& b){
    std::cout << "Type id of person and id of book" << std::endl;
       int i_p;
       int i_b;
       std::cin >> i_p >> i_b;
       if(i_p <= a.size() && i_b <= b.size()){
       for(size_t i {0}; i < c.size();++i){
        if(c[i].id_person == i_p){
            c[i].id_book = i_b;
        }
       }
       }else if(i_p > a.size() && i_b > b.size()){
        std::cout << "two invalid ID" << std::endl;
       }else if(i_p > a.size()){
        std::cout << "invalid person ID" << std::endl;
       }else if(i_b > b.size()){
        std::cout << "invalid book ID" << std::endl;
       }

}

template <typename T>
void erase(std::vector<T>& a){
    std::cout << "type ID to erase" << std::endl;
    int index1;
    std::cin >> index1;
    typename std::vector<T>::iterator x = a.begin() + index1;
    if(index1 <= a.size()){
    a.erase(x);
    }else{
        std::cout << "invalid ID" << std::endl;
    }
}

void erase_person(std::vector<person>& a,std::vector<borrowing>& c){
    std::cout << "type ID to erase" << std::endl;
    int indexx;
    std::cin >> indexx;
    std::vector<person>::iterator x = a.begin() + indexx;
    std::vector<borrowing>::iterator y = c.begin() + indexx;
    if(indexx <= a.size()){
       a.erase(x); 
    }else{
        std::cout << "invalid ID" << std::endl;
    }
    c.erase(y);
}

void erase_borrow(std::vector<borrowing>& c){
    std::cout << "type ID of person to erase the borrow" << std::endl;
    int bor;
    std::cin >> bor;
    if(bor <= c.size()){
    for(size_t i {0}; i < c.size();++i){
        if(c[i].id_person == bor){
            c[i].id_book = 9999;
        }
    }
    }else{
        std::cout << "invalid ID" << std::endl;
    }
}

#endif