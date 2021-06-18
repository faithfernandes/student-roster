#include "student.h"
using namespace std;



//Empty constructor for student objects
Student::Student(){
   this->studentID = "";
   this->studentFirstName = "";
   this->studentLastName = "";
   this->studentEmailAddress = "";
   this->studentAge = 0;
   for (int i = 0; i < daysArraySize; ++i) {
      this->numDays2Complete[i] = 0;
   }
   this->degreeProgram = DegreeProgram::UNDECLARED;
}

// Constructor with parameters
Student::Student(string studentID, string studentFirstName, string studentLastName, string studentEmailAddress, int studentAge, int numDays2Complete[], DegreeProgram degreeProgram) {
   this->studentID = studentID;
   this->studentFirstName = studentFirstName;
   this->studentLastName = studentLastName;
   this->studentEmailAddress = studentEmailAddress;
   this->studentAge = studentAge;
   for (int i = 0; i < daysArraySize; ++i) {
      this->numDays2Complete[i] = numDays2Complete[i];
   }
   this->degreeProgram = degreeProgram;
}

// Destructor
Student::~Student() {}

// Used in Roster::printAll(); prints one student at a time
void Student::print() {
   cout << this->studentID << '\t' << '\t' ;
   cout << "First Name: " << this->studentFirstName << '\t'<< '\t';
   cout << "Last Name: " << this->studentLastName << '\t'<< '\t';
   cout << "Email: " << this->studentEmailAddress << '\t'<< '\t';
   cout << "Age: " << this->studentAge << '\t'<< '\t';
   cout << "Days in Course: " << this->numDays2Complete[0] << '\t';
   cout << this->numDays2Complete[1] << '\t';
   cout << this->numDays2Complete[2] << '\t'<< '\t';
   cout << "Degree Program: " << degreeProgramStrings[(int)this->degreeProgram] << endl;
}

// Mutators
void Student::setStudentID(string studentID) {
   this->studentID = studentID;
}
void Student::setFirstName(string studentFirstName) {
   this->studentFirstName = studentFirstName;
}
void Student::setLastName(string studentLastName) {
   this->studentLastName = studentLastName;
}
void Student::setEmailAddress(string studentEmailAddress) {
   this->studentEmailAddress = studentEmailAddress;
}
void Student::setAge(int studentAge) {
   this->studentAge = studentAge;
}
void Student::setNumDays2Complete(const int numDays2Complete[]) {
   for (int i = 0; i < daysArraySize; ++i) {
      this->numDays2Complete[i] - numDays2Complete[i];
   }
}
void Student::setDegreeProgram(DegreeProgram degreeProgram) {
   this->degreeProgram = degreeProgram;
}

// Accessors
string Student::getStudentID() {
   return this->studentID;
}
string Student::getFirstName() {
   return this->studentFirstName;
}
string Student::getLastName() {
   return this->studentLastName;
}
string Student::getEmailAddress() {
   return this->studentEmailAddress;
}
int Student::getAge() {
   return this->studentAge;
}
const int* Student::getNumDays2Complete() {
   return this->numDays2Complete;
}
DegreeProgram Student::getDegreeProgram() {
   return this->degreeProgram;
}

