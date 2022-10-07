#include <iostream>
#include <string>
using namespace std;

class Employee {

  public:
    string Name;
    string Company;
    int Age;

void data(){
  cout << "Name: " << Name << endl;
  cout << "Company: " << Company << endl;
  cout << "Age: " << Age << endl;
}

  Employee(string name, string company, int age){
    Name = name;
    Company = company;
    Age = age;
  }

};
