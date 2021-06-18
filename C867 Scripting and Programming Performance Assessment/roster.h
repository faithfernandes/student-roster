#pragma once
#include "student.h"
using namespace std;



class Roster {
   public:
      // Accessor
      Student** getStudents();
      
      // Parsing
      void parse(string studentData);
      
      // E3a. Sets instance variables for Students and updates Roster
      void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
      
      // E3b. Romoves student using studentID or prints error message if student does not exist
      void remove(string studentID);
      
      // E3c. Prints all info for every student in classRosterArray
      void printAll();
      
      // E3d. Prints average num of days in three courses for student identified by studentID
      void printAverageDaysInCourse(string studentID);
      
      // E3e. Verifies student emails and prints invalid ones
      void printInvalidEmails();
      
      // E3f. Prints out student information for a degree program specified by an enumerated type
      void printByDegreeProgram(DegreeProgram degreeProgram);
      
      // F5. Destructor
      ~Roster();
   
   private:
      int lastPointedTo = -1;
      const static int numStudents = 5;
      // E1.  Array of pointers to hold the data provided in the “studentData Table.”
      Student* classRosterArray[numStudents] = {nullptr, nullptr, nullptr, nullptr, nullptr};
};
;
