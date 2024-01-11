#include "SecondSessionStudent.h"

SecondSessionStudent::SecondSessionStudent(const char* name, int course, const std::string& group, const int firstSessionGrades[4], const int secondSessionGrades[5])
        : FirstSessionStudent(name, course, group, firstSessionGrades) {
    for (int i = 0; i < 5; ++i) {
        this->grades[i] = secondSessionGrades[i];
    }
}

float SecondSessionStudent::calculateAverage() const {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += grades[i];
    }
    return static_cast<float>(sum) / 5;
}

int SecondSessionStudent::getGrade(int index) const {
    return grades[index];
}

void SecondSessionStudent::setGrade(int index, int value) {
    grades[index] = value;
}
