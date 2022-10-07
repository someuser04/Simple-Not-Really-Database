#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

int main() {

    string Namerequest;
    string Companyrequest;
    int Agerequest;
    string dataRequest;

    cout << endl;
    cout << "<Creating New Employee Profile>";
    cout << endl;
    cout << "Please enter your full name: ";
    getline(cin, Namerequest);
    cout << "Please enter where you have worked before: ";
    getline(cin, Companyrequest);
    cout << "Please enter your age: ";
    cin >> Agerequest;

    cout << endl;
    cout << "Do you wish to see the data regarding the employee?" << endl;
    cout << "Yes or No? ";
    cin >> dataRequest;

  if (dataRequest == "Yes" || dataRequest == "yes"){

      int guessAttempt = 0;
      int keyAttempt;
      int securityKey = 1234;

      while (guessAttempt < 3){

      cout << "Input security key: ";
      cin >> keyAttempt;

      if (keyAttempt == securityKey){

          Employee employee0(Namerequest, Companyrequest, Agerequest);
          cout << endl;
          employee0.data();
          cout << endl;
          return 0;
          
      }

        cout << "Wrong key!" << endl;
        guessAttempt++;
        
      }

    cout << "Attempts limit exceeded. Access Denied.";
    return 0;
      
    }

    else {
    cout << "Very well. Have a good day.";
    }

}
