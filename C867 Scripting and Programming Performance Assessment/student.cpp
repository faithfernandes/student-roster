#include <iostream>
#include <vector>
#include <string>
#include "degree.h"
#include "roster.h"
#include "student.h"
using namespace std;

//Definitions from student.h

// Mutators
void Student::setFirstName(string firstName) {
   studentFirstName = firstName;
   return;
}
void Student::setLastName(string lastName) {
   studentLastName = lastName;
   return;
}
void Student::setEmailAddress(string emailAddress) {
   studentEmailAddress = emailAddress;
   return;
}
void Student::setAge(int age) {
   studentAge = age;
   return;
}
void Student::setNumDays2Complete(int course1Days, int course2Days, int course3Days) {
   numDays2Complete.at(0) = course1Days;
   numDays2Complete.at(1) = course2Days;
   numDays2Complete.at(2) = course3Days;
   return;
}
void Student::setDegreeProgram(DegreeProgram degPrgm) {
   degreeProgram = degPrgm;
}

// Accessors
string Student::getFirstName() {
   return studentFirstName;
}
string Student::getLastName() {
   return studentLastName;
}
string Student::getEmailAddress() {
   return studentEmailAddress;
}
int Student::getAge() {
   return studentAge;
}
//FIXME: Figure out how to return a vector
vector Student::getNumDays2Complete() {
   return numDays2Complete{};
}
DegreeProgram Student::getDegreeProgram() {
   return degreeProgram;
}
