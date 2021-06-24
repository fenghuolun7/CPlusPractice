#include "student.h"  //Student
using namespace std;
int main() {
    Student *pStu = new Student;
    pStu->name = "小明";
    pStu->age = 15;
    pStu->score = 92.5f;
    pStu->say();
    delete pStu;  //删除对象
    return 0;
}
