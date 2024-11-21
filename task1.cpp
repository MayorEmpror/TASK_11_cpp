#include <iostream>
#include <string>
using namespace std;
// Base class Animal
class Animal {
private:
    string name;
    int age;
public:
    // Getter methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    // Setter methods
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Method to display animal's info
    void displayInfo() {
        cout << "Animal Name: " << name << endl;
        cout << "Animal Age: " << age << endl;
    }
};
// Derived class Mammal
class Mammal : public Animal {
public:
    // Method to simulate feeding baby mammal
    void feedBaby() {
        cout << "Feeding baby mammal." << endl;
    }
};
// Derived class Bird
class Bird : public Animal {
public:
    // Method to simulate laying an egg
    void layEgg() {
        cout << "Laying an egg." << endl;
    }
};
// Derived class Reptile
class Reptile : public Animal {
public:
    // Method to simulate shedding skin
    void shedSkin() {
    cout << "Shedding skin." << endl;
    }
};
int main() { 
    Mammal mammal;
    Bird bird;
    Reptile reptile;  
    mammal.setName("Lion");
    mammal.setAge(5);
    bird.setName("Parrot");
    bird.setAge(3);  
    reptile.setName("Snake");
    reptile.setAge(2);
    cout << "Mammal Info:" << endl;
    mammal.displayInfo();
    mammal.feedBaby();
    cout << endl; 
    cout << "Bird Info:" << endl;
    bird.displayInfo();
    bird.layEgg();
    cout << endl;  
    cout << "Reptile Info:" << endl;
    reptile.displayInfo();
    reptile.shedSkin();
    cout << endl;
    return 0;
}
