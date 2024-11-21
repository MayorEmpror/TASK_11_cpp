#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
private:
    string name;
    int age;

public:
    // Getter and setter methods for name and age
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Virtual method to display info (can be overridden by derived classes)
    virtual void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Employee
class Employee : public Person {
private:
    int employeeID;

public:
    // Getter and setter method for employeeID
    int getEmployeeID() {
        return employeeID;
    }

    void setEmployeeID(int id) {
        employeeID = id;
    }

    // Override the displayInfo() method to include employee ID
    void displayInfo() {
        Person::displayInfo();
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int studentID;

public:
    // Getter and setter method for studentID
    int getStudentID() {
        return studentID;
    }

    void setStudentID(int id) {
        studentID = id;
    }

    // Override the displayInfo() method to include student ID
    void displayInfo() {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    // Create objects for Person, Employee, and Student
    Person person;
    Employee employee;
    Student student;

    // Set name and age for Person object
    person.setName("Alice");
    person.setAge(30);

    // Set name, age, and employee ID for Employee object
    employee.setName("Bob");
    employee.setAge(35);
    employee.setEmployeeID(1001);

    // Set name, age, and student ID for Student object
    student.setName("Charlie");
    student.setAge(20);
    student.setStudentID(2002);

    // Display info for each object
    cout << "Person Info:" << endl;
    person.displayInfo();
    cout << endl;

    cout << "Employee Info:" << endl;
    employee.displayInfo();
    cout << endl;

    cout << "Student Info:" << endl;
    student.displayInfo();
    cout << endl;

    return 0;
}
