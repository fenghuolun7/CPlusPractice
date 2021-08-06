#include <iostream>
#include <string>
#include <memory>
#include <exception>
using namespace std;

struct myDel
{
    void operator()(int *p) {
        delete p;
    }
};

int main(){
std::unique_ptr<int, myDel> p6(new int);
cout << &p6 << endl;

std::unique_ptr<int, myDel> p6(new int, myDel());
cout << &p6 << endl;
}
