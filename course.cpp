#include "course.h"
#include <iostream>
using namespace std;

int Course::totalCourses = 0;

Course::Course() {
    name = "";
    code = "";
    credits = 0;
    professor = "";
    prerequisites[0] = "";
    prerequisites[1] = "";
    nrc[0] = 0;
    nrc[1] = 0;
    schedules[0] = { "", "", "", "" };
    schedules[1] = { "", "", "", "" };
}

Course::Course(string name, string code, int credits, string professor, string req1, string req2, int nrc1, int nrc2, Schedule schedule1, Schedule schedule2) {
    this->name = name;
    this->code = code;
    this->credits = credits;
    this->professor = professor;
    prerequisites[0] = req1;
    prerequisites[1] = req2;
    nrc[0] = nrc1;
    nrc[1] = nrc2;
    schedules[0] = schedule1;
    schedules[1] = schedule2;
    totalCourses++;
}

void Course::showCourse() const {
    cout << "Course: " << name << endl;
    cout << "Code: " << code << " | Credits: " << credits << endl;
    cout << "Professor: " << professor << endl;
    cout << "Prerequisites: " << prerequisites[0] << ", " << prerequisites[1] << endl;
    cout << "NRC 1: " << nrc[0] << " | NRC 2: " << nrc[1] << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Schedule " << i + 1 << ": " << schedules[i].day << " " << schedules[i].start_time << " - " << schedules[i].end_time << " in Room: " << schedules[i].room << endl;
    }
}

void Course::initializeCourses() {
    // Default courses for "Computer Engineering"
    Schedule schedule1 = { "Monday", "08:00", "10:00", "A101" };
    Schedule schedule2 = { "Wednesday", "08:00", "10:00", "A102" };
    Course c1("Algorithms", "ALG101", 3, "Dr. Perez", "MATH101", "CS101", 101, 102, schedule1, schedule2);

    // Default courses for "Business Administration"
    Schedule schedule3 = { "Tuesday", "09:00", "11:00", "B201" };
    Schedule schedule4 = { "Thursday", "09:00", "11:00", "B202" };
    Course c2("Business Management", "GEST101", 4, "Lic. Garcia", "ECO101", "MATH102", 201, 202, schedule3, schedule4);

    // Default courses for "English"
    Schedule schedule5 = { "Monday", "10:00", "12:00", "C301" };
    Schedule schedule6 = { "Friday", "10:00", "12:00", "C302" };
    Course c3("Advanced English", "ING101", 3, "Prof. Lee", "ESP101", "CS101", 301, 302, schedule5, schedule6);
}
