#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void student::setName(string first, string last)
{

firstName = first;
lastName = last;
}

string student::fullName()
{

string full;
full.append(firstName);
full.append(" ");
full.append(lastName);
return full;
}
