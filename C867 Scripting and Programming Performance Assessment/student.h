#ifndef STUDENT_H
#define STUDENT_H
using namespace std;

#include "degree.h"

// Declarations for student.cpp

class Student {
   public:
   
   // Mutators
   void setFirstName(string firstName);
   void setLastName(string lastName);
   void setEmailAddress(string emailAddress);
   void setAge(int age);
   void setNumDays2Complete(int course1Days, int course2Days, int course3Days);
   void setDegreeProgram(DegreeProgram degPrgm);
   
   // Accessors
   string getFirstName();
   string getLastName();
   string getEmailAddress();
   int getAge();
   int getNumDays2Complete();
   string getDegreeProgram();
   
   private:
    string studentID;
    string studentFirstName;
    string studentLastName;
    string studentEmailAddress;
    int studentAge;
    /*
     It gave me an error when I tried to use () like the book said.
     I looked it up and what I found was that C++11 requires the use of {} instead?
     I don't know how true that is, but it took away the error, so idk
    */
    vector<int> numDays2Complete{3};
    DegreeProgram degreeProgram;
    
};

#endif
