#include "student.h"
#include <iostream>
using namespace std;

Student::Student() {
    name = "";
    id = "";
    career = "";
    level = "";
    approved_courses[0] = "";
    approved_courses[1] = "";
}

Student::Student(string name, string id, string career, string level, string course1, string course2) {
    this->name = name;
    this->id = id;
    this->career = career;
    this->level = level;
    approved_courses[0] = course1;
    approved_courses[1] = course2;
}

bool Student::verifyId(string id) {
    // Simulates a student database
    return this->id == id;  // Here you can add a search in a list of students
}

void Student::showStudent() const {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Career: " << career << endl;
    cout << "Level: " << level << endl;
}
