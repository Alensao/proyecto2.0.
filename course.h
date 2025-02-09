#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

struct Schedule {
    string day;
    string start_time;
    string end_time;
    string room;
};

class Course {
private:
    string name;
    string code;
    int credits;
    string professor;
    string prerequisites[2];  // Prerequisites for the course
    int nrc[2];  // NRC of the two groups
    Schedule schedules[2];  // Available schedules
    static int totalCourses;  // Total course counter

public:
    Course();
    Course(string name, string code, int credits, string professor, string req1, string req2, int nrc1, int nrc2, Schedule schedule1, Schedule schedule2);
    void showCourse() const;
    static void initializeCourses();  // Initialize default courses
};

#endif

