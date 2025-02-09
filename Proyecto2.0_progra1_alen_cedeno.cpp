#include <iostream>
#include "course.h"
#include "student.h"
#include "enrollment.h"

using namespace std;

int main() {
    // Initialize default courses
    Course::initializeCourses();

    int option;
    do {
        cout << "MENU\n";
        cout << "1. File\n";
        cout << "2. Maintenance\n";
        cout << "3. Enrollment Registration\n";
        cout << "4. Query\n";
        cout << "Select an option: ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "1. About\n";
            cout << "2. Exit\n";
            cout << "Select an option: ";
            int subOption;
            cin >> subOption;
            if (subOption == 1) {
                cout << "System created by [Your Name]\n";
            }
            break;

        case 2:
            cout << "Maintenance\n";
            cout << "1. Students\n";
            cout << "2. Courses\n";
            cout << "3. Schedules\n";
            cout << "Select an option: ";
            int maintenanceOption;
            cin >> maintenanceOption;
            break;

        case 3:
            // Enrollment Registration
            cout << "Enter student ID: ";
            string id;
            cin >> id;

            // Simulating ID verification (this would be part of the database)
            Student student;
            if (student.verifyId(id)) {
                cout << "ID verified. Proceed with enrollment.\n";

                // Show default courses for Computer Engineering
                cout << "\nDefault courses for Computer Engineering:\n";
                Course c1;
                c1.showCourse();  // Shows the Algorithms course
                Course c2;
                c2.showCourse();  // Shows the Business Management course

                // Logic for selecting courses and verifying prerequisites
                // (This process would be included as part of the complete enrollment flow)

            }
            else {
                cout << "ID not registered. Returning to the main menu.\n";
            }
            break;

        case 4:
            cout << "Query\n";
            break;

        default:
            cout << "Invalid option. Try again.\n";
            break;
        }
    } while (option != 0);

    return 0;
}

