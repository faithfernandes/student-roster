#pragma once
#include "student.h"
using namespace std;


//  A.  studentData Table with personal information
const string studentData[] = {
   "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
   "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
   "A5,Faith,Fernandes,fdartt@wgu.edu,22,15,31,23,SOFTWARE"
};

class Roster {
   public:
   
      // Constructor
      Roster();
      
      // F5. Destructor
      ~Roster();
      
      // E1. classRosterArray to hold studentData Table information
      Student* classRosterArray[5];
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
      void printByDegreeProgram();
      
      
};
