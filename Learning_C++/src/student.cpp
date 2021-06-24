#include <iostream>   //std::cout、std::endl
#include "student.h"  //Student
void Student::say() {
    std::cout << name << "的年龄是" << age << "，成绩是" << score << std::endl;
};

