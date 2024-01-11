#ifndef FIRSTSESSIONSTUDENT_H
#define FIRSTSESSIONSTUDENT_H

#include "Student.h"

class FirstSessionStudent : public Student {
private:
    int grades[4];

public:
    FirstSessionStudent(const char* name, int course, const std::string& group, const int grades[4]);

    float calculateAverage() const override;
    int getGrade(int index) const;
    void setGrade(int index, int value);
};

#endif // FIRSTSESSIONSTUDENT_H
