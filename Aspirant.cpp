#include "Aspirant.h"
#include <cstring>
#include <iostream>

Aspirant::Aspirant(int* marksArray, int count, const char* studentName, const char* studentDate,
    const char* studentTelephone, const char* studentCity, const char* studentCountry,
    const char* Academy, const char* Academy_city_country, int Number,
    const char* dissertationTopic, const char* supervisorName)
    : Student(marksArray, count, studentName, studentDate, studentTelephone, studentCity, studentCountry,
        Academy, Academy_city_country, Number)
{
    this->dissertationTopic = new char[strlen(dissertationTopic) + 1];
    strcpy_s(this->dissertationTopic, strlen(dissertationTopic) + 1, dissertationTopic);

    this->supervisorName = new char[strlen(supervisorName) + 1];
    strcpy_s(this->supervisorName, strlen(supervisorName) + 1, supervisorName);
}

Aspirant::~Aspirant() {
    delete[] dissertationTopic;
    delete[] supervisorName;
}

Aspirant::Aspirant(const Aspirant& other) : Student(other) {
    dissertationTopic = new char[strlen(other.dissertationTopic) + 1];
    strcpy_s(dissertationTopic, strlen(other.dissertationTopic) + 1, other.dissertationTopic);

    supervisorName = new char[strlen(other.supervisorName) + 1];
    strcpy_s(supervisorName, strlen(other.supervisorName) + 1, other.supervisorName);
}

Aspirant& Aspirant::operator=(const Aspirant& other) {
    if (this != &other) {
        Student::operator=(other);

        delete[] dissertationTopic;
        delete[] supervisorName;

        dissertationTopic = new char[strlen(other.dissertationTopic) + 1];
        strcpy_s(dissertationTopic, strlen(other.dissertationTopic) + 1, other.dissertationTopic);

        supervisorName = new char[strlen(other.supervisorName) + 1];
        strcpy_s(supervisorName, strlen(other.supervisorName) + 1, other.supervisorName);
    }
    return *this;
}

void Aspirant::display() {
    Student::display();
    std::cout << "Тема дисертації: " << dissertationTopic << "\n";
    std::cout << "Ім'я наукового керівника: " << supervisorName << "\n";
}
