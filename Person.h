#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

// Abstract class
class Person
{
private:
    int id;
    string name;
    int age;
    string phone;

public:
    Person();
    Person(int id, string name, int age, string phone);

    int getId() const;
    string getName() const;
    int getAge() const;
    string getPhone() const;

    void setId(int id);
    void setName(string name);
    void setAge(int age);
    void setPhone(string phone);

    // Abstraction + Dynamic Polymorphism
    virtual void display() const = 0;

    virtual ~Person();
};

#endif
