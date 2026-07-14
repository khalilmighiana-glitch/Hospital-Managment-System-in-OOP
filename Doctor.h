#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"

class Doctor : public Person
{
private:
    string specialization;

public:
    Doctor();
    Doctor(int id, string name, int age, string phone, string specialization);

    string getSpecialization() const;
    void setSpecialization(string specialization);

    void display() const;

    string toFileString() const;
};

#endif
