#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    static int nextId;
    int id;
    char* name;
    int course;
    std::string group;
    const int registrationNumber;

public:
    Student(const char* name, int course, const std::string& group);
    Student(const Student& other);
    virtual ~Student();

    int getId() const;
    const char* getName() const;
    int getCourse() const;
    const std::string& getGroup() const;
    int getRegistrationNumber() const;

    friend std::ostream& operator<<(std::ostream& os, const Student& student);

    virtual float calculateAverage() const = 0;
};

#endif // STUDENT_H
