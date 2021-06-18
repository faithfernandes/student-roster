#pragma once
#include <string>
using namespace std;



// C.  Enumerated data type DegreeProgram containing the data type values SECURITY, NETWORK, and SOFTWARE.
// UNDECLARED DegreeProgram added to serve as a default and a unit test; no student should end with an UNDECLARED DegreeProgram
enum class DegreeProgram{UNDECLARED, SECURITY, NETWORK, SOFTWARE};
static const string degreeProgramStrings[] =  {"UNDECLARED","SECURITY","NETWORK","SOFTWARE"};

