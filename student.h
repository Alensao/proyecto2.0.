#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    string id;
    string career;
    string level;
    string approved_courses[2];

public:
    Student();
    Student(string name, string id, string career, string level, string course1, string course2);
    bool verifyId(string id);
    void showStudent() const;
    void registerStudent(string name, string id, string career, string level, string course1, string course2);
};

#endif

