#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include "Student.h"
#include "Course.h"

class Enrollment {
private:
    Student student;
    Course course;
    int nrc;
    Schedule schedule;
    double amount;

public:
    Enrollment();
    void registerEnrollment(Student student, Course course, int nrc, Schedule schedule);
    void calculateAmount();
    void showEnrollment() const;
};

#endif
