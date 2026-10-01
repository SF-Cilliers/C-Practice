#include<iostream>
#include<iomanip>
#include<string>

int main(){

    using namespace std;

    /* cout << "Hello World" << '\n';

    double dRadius;
    cout << "Enter Radius of circle: ";
    cin >> dRadius;

    double dPi = 3.14159; 
    double dArea = dPi * dRadius * dRadius; //Calculation

    cout << "The area of the circle is: " << fixed << setprecision(2) << dArea << '\n'; */

    string strName;
    cout << "Enter your Name: ";
    cin >> strName;

    string strSurname;
    cout << "Enter your Surname: ";
    cin >> strSurname;

    string strFullName = strName + " " + strSurname;

    int iAge;
    cout << "Enter your Age: ";
    cin >> iAge;

    if (strFullName == "SF Cilliers")
    {cout << "Welcome to your program " << strFullName << '\n' << "! You are the creator of this program!" << '\n';}
    else
    {cout << "\033[31mYou are not welcome here!\033[0m" << '\n';
        
    }

    //cout << "Welcome to the program " << strFullName << "! You are " << iAge << " years old." << '\n';

    

    return 0;

}
