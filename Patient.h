#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"

class Patient : public Person
{
private:
    string problem;
    string status;

public:
    Patient();
    Patient(int id, string name, int age, string phone, string problem, string status);

    string getProblem() const;
    string getStatus() const;

    void setProblem(string problem);
    void setStatus(string status);

    // Static polymorphism: function overloading
    void showBrief() const;
    void showBrief(string heading) const;

    // Dynamic polymorphism: function overriding
    void display() const;

    string toFileString() const;
};

#endif
