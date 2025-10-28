#include <iostream>
#include "bird.h"

class Duck : public Bird
{
    public:
    Duck(): Bird("Duck") {
         cry();
    }
    virtual ~Duck() {
        cry();
     }

     virtual void cry(){
        std :: cout << "Quack!" << std:: endl;
     }

    };

class Penguin : public Bird{
    public:
    Penguin(): Bird("Penguin") {
         cry();
    }

    virtual void fly() {
        std::cout << "This bird can't fly." << std::endl;
    }

    virtual ~Penguin() {
        cry();
     }

     virtual void cry(){
        std :: cout << "Squawk!" << std::endl;
     }
};

class Eagle : public Bird{
    public:
    Eagle(): Bird("Eagle") {
         cry();
    }

     virtual void swim() {
        std::cout << "This bird can't swim." << std::endl;
    }

    virtual ~Eagle() {
        cry();
        
     }
    virtual void cry(){
            std::cout << "Screech!" << std::endl;
        }
};


