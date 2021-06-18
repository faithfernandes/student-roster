//
//  main.cpp
//  C867 Scripting and Programming Performance Assessment
//
//  Created by Faith Fernandes on 5/31/21.
//
#include "roster.h"
using namespace std;



// main() function in main.cpp that contains the required function calls to meet assignment requirements
int main() {

   //  A.  studentData Table with personal information added
   const string studentData[] = {
      "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Faith,Fernandes,fdartt@wgu.edu,22,15,31,23,SOFTWARE"
   };
   const int numStudents = 5;
   
   // F1. Print out to screen the course title, programming language used, your WGU student ID, and name
   cout << "C867 - Scripting & Programming: Applications" << endl;
   cout << "Language - C++" << endl;
   cout << "Student ID - #########" << endl; // FIXME: Add student ID before turning in (do not post to GitHub)
   cout << "Name - Faith Fernandes" << endl;
   cout << endl;
   
   // F2. Instance of the Roster class called classRoster.
   Roster classRoster;
   
   // F3. Adds each student to classRoster
   for (int i = 0; i < numStudents; ++i) {
      classRoster.parse(studentData[i]);
   }
   
   // F4. Follows structure laid out by assignment
   // Prints all students
   classRoster.printAll();
   // Prints any invalid emails and why they are invalid
   classRoster.printInvalidEmails();
   // Prints the average num of days it took each student to complete three courses
   for (int i = 0; i < numStudents; ++i) {
      classRoster.printAverageDaysInCourse(classRoster.getStudents()[i]->getStudentID());
   }
   // Prints students by degree program
   for (int i = 0; i < 4; ++i) {
      classRoster.printByDegreeProgram((DegreeProgram)i);
   }
   // Removes student with ID A3 and then prints all
   classRoster.remove("A3");
   // Tries to remove student A3 again, but fails
   classRoster.remove("A3");
   
   cout << "DONE." << endl;
  
   //F5. Destructor Implementation
   classRoster.~Roster();
   
   return 0;
}
