//
// Created by Eu on 06.03.2025.
//

#include <iostream>

class Dog {
public:
    bool eat() {
        std::cout << "Dog is eating";
        return true;
    }

    int get_age() {
        return age;
    }

    int set_age(int new_age) {
        age = new_age;
        return age;
    }

private:
    int age;
};

int main(){
    Dog dog1 = Dog();
    dog1.eat();
    dog1.set_age(10);
    //dog1.age = 10;
    //dog1.get_age();
    std::cout << dog1.get_age() << std::endl;


    return 0;
}
