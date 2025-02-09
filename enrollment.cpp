#include "enrollment.h"
#include <iostream>
using namespace std;

Enrollment::Enrollment() {
    amount = 0.0;
}

void Enrollment::registerEnrollment(Student student, Course course, int nrc, Schedule schedule) {
    this->student = student;
    this->course = course;
    this->nrc = nrc;
    this->schedule = schedule;
}

void Enrollment::calculateAmount() {
    amount = course.credits * 12000;  // Assuming each credit costs 12,000
}

void Enrollment::showEnrollment() const {
    student.showStudent();
    course.showCourse();
    cout << "Chosen NRC: " << nrc << endl;
    cout << "Schedule: " << schedule.day << " " << schedule.start_time << " - " << schedule.end_time << " in Room: " << schedule.room << endl;
    cout << "Amount to pay: " << amount << " colones." << endl;
}
