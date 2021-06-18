#pragma once
#include <iostream>
#include <iomanip>
#include "degree.h"
using namespace std;



class Student {
   public:
      // Size of array for average days to complete a course
      const static int daysArraySize = 3;
      
   // D2d. Constructor
   // Blank Constructor
   Student();
   // Constructor with parameters
   Student(string studentID, string studentFirstName, string studentLastName, string studentEmailAddress, int studentAge, int numDays2Complete[], DegreeProgram degreeProgram);
   
   // Destructor for Requirement F5
   ~Student();
   
   // D2a. Accessors
   string getStudentID();
   string getFirstName();
   string getLastName();
   string getEmailAddress();
   int getAge();
   const int* getNumDays2Complete();
   DegreeProgram getDegreeProgram();
   
   // D2b. Mutators
   void setStudentID(string studentID);
   void setFirstName(string studentFirstName);
   void setLastName(string studentLastName);
   void setEmailAddress(string studentEmailAddress);
   void setAge(int studentAge);
   void setNumDays2Complete(const int numDays2Complete[]);
   void setDegreeProgram(DegreeProgram degreeProgram);
   
   // D2e. Print function for specific student data
   void print();
   
   /* D1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:   student ID, first name, last name, email address, age, array of number of days to complete each course, degree program */
   private:
    string studentID;
    string studentFirstName;
    string studentLastName;
    string studentEmailAddress;
    int studentAge;
    int numDays2Complete[daysArraySize];
    DegreeProgram degreeProgram;
    
};

