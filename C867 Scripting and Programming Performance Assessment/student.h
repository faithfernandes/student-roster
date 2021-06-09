#pragma once
#include "degree.h"
using namespace std;

// Declarations for student.cpp

class Student {
   public:
   
   // D2d. Constructor
   Student();
   
   // D2a. Accessors
   string getFirstName();
   string getLastName();
   string getEmailAddress();
   int getAge();
   vector<int> getNumDays2Complete();
   DegreeProgram getDegreeProgram();
   
   // D2b. Mutators
   void setFirstName(string firstName);
   void setLastName(string lastName);
   void setEmailAddress(string emailAddress);
   void setAge(int age);
   void setNumDays2Complete(int course1Days, int course2Days, int course3Days);
   void setDegreeProgram(DegreeProgram degPrgm);
   
   // D2e. Print function for specific student data
   string print();
   

   
   /*
      D1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:   student ID, first name, last name, email address, age, array of number of days to complete each course, degree      program
   */
   private:
    string studentID;
    string studentFirstName;
    string studentLastName;
    string studentEmailAddress;
    int studentAge;
    vector<int> numDays2Complete{3};
    DegreeProgram degreeProgram;
    
};

