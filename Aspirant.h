#pragma once
#include "Student.h"

class Aspirant : public Student {
private:
    char* dissertationTopic;
    char* supervisorName;

public:
    Aspirant(int* marksArray, int count, const char* studentName, const char* studentDate,
        const char* studentTelephone, const char* studentCity, const char* studentCountry,
        const char* Academy, const char* Academy_city_country, int Number,
        const char* dissertationTopic, const char* supervisorName);

    ~Aspirant();

    Aspirant(const Aspirant& other);

    Aspirant& operator=(const Aspirant& other);

    void print();
};
