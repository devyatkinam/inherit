#include "FirstSessionStudent.h"

FirstSessionStudent::FirstSessionStudent(const char* name, int course, const std::string& group, const int grades[4])
        : Student(name, course, group) {
    for (int i = 0; i < 4; ++i) {
        this->grades[i] = grades[i];
    }
}

float FirstSessionStudent::calculateAverage() const {
    int sum = 0;
    for (int i = 0; i < 4; ++i) {
        sum += grades[i];
    }
    return static_cast<float>(sum) / 4;
}

int FirstSessionStudent::getGrade(int index) const {
    return grades[index];
}

void FirstSessionStudent::setGrade(int index, int value) {
    grades[index] = value;
}
