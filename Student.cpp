#include "Student.h"
#include <cstring>

int Student::nextId = 1;

Student::Student(const char* name, int course, const std::string& group)
        : id(nextId++), course(course), group(group), registrationNumber(id) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Student::Student(const Student& other)
        : id(nextId++), course(other.course), group(other.group), registrationNumber(id) {
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);
}

Student::~Student() {
    delete[] name;
}

int Student::getId() const {
    return id;
}

const char* Student::getName() const {
    return name;
}

int Student::getCourse() const {
    return course;
}

const std::string& Student::getGroup() const {
    return group;
}

int Student::getRegistrationNumber() const {
    return registrationNumber;
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "ID: " << student.id << "\nимя: " << student.name << "\nкурс: " << student.course
       << "\nгруппа: " << student.group << "\nрегистрация: " << student.registrationNumber;
    return os;
}
