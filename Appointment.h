#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Appointment
{
private:
    int appointmentId;
    int patientId;
    int doctorId;
    string date;
    string reason;

public:
    Appointment();
    Appointment(int appointmentId, int patientId, int doctorId, string date, string reason);

    int getAppointmentId() const;
    int getPatientId() const;
    int getDoctorId() const;
    string getDate() const;
    string getReason() const;

    void displayBasic() const;
    string toFileString() const;
};

#endif
