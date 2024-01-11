#include "FirstSessionStudent.h"
#include "SecondSessionStudent.h"

int main() {
    setlocale(LC_ALL, "Rus");
    const int firstSessionGrades[4] = {90, 85, 75, 95};
    const int secondSessionGrades[5] = {85, 88, 92, 78, 96};

    Student* students[2];

    students[0] = new FirstSessionStudent("имя", 3, "группа", firstSessionGrades);
    students[1] = new SecondSessionStudent("имя2", 4, "группа", firstSessionGrades, secondSessionGrades);

    for (int i = 0; i < 2; ++i) {
        std::cout << *students[i] << "\nср балл: " << students[i]->calculateAverage() << "\n\n";
    }

    for (int i = 0; i < 2; ++i) {
        delete students[i];
    }

    return 0;
}
