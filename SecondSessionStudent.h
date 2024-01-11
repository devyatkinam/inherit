#ifndef SECONDSESSIONSTUDENT_H
#define SECONDSESSIONSTUDENT_H

#include "FirstSessionStudent.h"

class SecondSessionStudent : public FirstSessionStudent {
private:
    int grades[5];

public:
    SecondSessionStudent(const char* name, int course, const std::string& group, const int firstSessionGrades[4], const int secondSessionGrades[5]);

    float calculateAverage() const override;
    int getGrade(int index) const;
    void setGrade(int index, int value);
};

#endif // SECONDSESSIONSTUDENT_H
