#include <iostream>
#include "parentalcommittee.h"
#include "Employee.h"
#include "Department.h"
#include "Group.h"
#include "Manager.h"
#include "Parent.h"
#include "Student.h"
#include "Teacher.h"
#include "pch.h"


int main()
{
    cout << "\n> Namespace in classes using" << endl;
    person::Teacher *t = new person::Teacher();
    person::Student *s = new person::Student();
    association::Group *g = new association::Group();
    association::Department *d = new association::Department();
    cout << "Memory Free" << endl;
    delete t;
    delete s;
    delete g;
    delete d;
    cout << "\n\nFinish" << endl;
}
