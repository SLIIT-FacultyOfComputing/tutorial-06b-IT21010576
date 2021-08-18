#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pId, char pname[]) {

  studentId = pId;

  strcpy(name, pname);
  
}

// Display StudentId and Name
void Student::display() {

  cout << "The student ID is " << studentId << endl;

  cout << "The student name is " << name << endl; 
  
}
