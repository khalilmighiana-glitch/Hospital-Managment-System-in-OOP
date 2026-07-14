#ifndef HOSPITAL_SYSTEM_H
#define HOSPITAL_SYSTEM_H

#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"

class HospitalSystem
{
private:
    static const int MAX_RECORDS = 100;

    Patient patients[MAX_RECORDS];
    Doctor doctors[MAX_RECORDS];
    Appointment appointments[MAX_RECORDS];

    int patientCount;
    int doctorCount;
    int appointmentCount;

    int nextPatientId;
    int nextDoctorId;
    int nextAppointmentId;

    int getMenuChoice(int minValue, int maxValue);
    int getIntInput(string message, int minValue, int maxValue);
    string getLineInput(string message);
    string getNameInput(string message);
    string getOptionalPhoneInput(string message);
    string getStatusInput();
    string getDateInput(string message);

    bool isNameValid(string text) const;
    bool isPhoneValid(string text) const;
    bool isDateValid(string text) const;

    int findPatientIndex(int id) const;
    int findDoctorIndex(int id) const;
    int countDoctorAppointments(int doctorId) const;

    void displayPerson(const Person* person) const;

    void pauseScreen();

    void addPatient();
    void addDoctor();
    void bookAppointment();

    void showPatients() const;
    void showDoctors() const;
    void showAppointments() const;

    void searchPatient();
    void updatePatientStatus();

    void saveData() const;
    void loadData();

public:
    HospitalSystem();
    void run();
};

#endif
