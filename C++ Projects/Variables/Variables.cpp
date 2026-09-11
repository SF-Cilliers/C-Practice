#include <iostream>

int main(){

    // This is a simple C++ program that prints out two lines of text to the console.
    /*
        This is a multi-line comment that explains the purpose of the program. 
    */

    std::cout << "I Like Sushi" <<  '\n'; 
    std::cout << "Its Super Delicious" << '\n'; 

    int iNum1= 5; //Decleration
    int iNum2= 6; //Decleration
    

    std::cout << "The value of iNum1 is: " << iNum1 << '\n';
    std::cout << "The value of iNum2 is: " << iNum2 << '\n';
    std::cout << "iNum1 + iNum2 = " << iNum1 + iNum2 << '\n';

    double dNum1= 5.5; //Decleration
    double dNum2= 6.5; //Decleration

    std::cout << "The value of dNum1 is: " << dNum1 << '\n';
    std::cout << "The value of dNum2 is: " << dNum2 << '\n';
    std::cout << "dNum1 + dNum2 = " << dNum1 + dNum2 << '\n';

    char cChar1= 'A'; //Decleration
    char cChar2= 'B'; //Decleration

    std::cout << "The value of cChar1 is: " << cChar1 << '\n';
    std::cout << "The value of cChar2 is: " << cChar2 << '\n';
    std::cout << "cChar1 + cChar2 = " << cChar1 + cChar2 << '\n';

    std::string str1= "Hello"; //Decleration
    std::string str2= "World"; //Decleration

    std::cout << "The value of str1 is: " << str1 << '\n';
    std::cout << "The value of str2 is: " << str2 << '\n';
    std::cout << "str1 + str2 = " << str1 + str2 << '\n';   

    bool bBool1= true; //Decleration
    bool bBool2= false; //Decleration

    std::cout << "The value of bBool1 is: " << bBool1 << '\n';
    std::cout << "The value of bBool2 is: " << bBool2 << '\n';

    //Calculation
    
    const double PI = 3.14159; //Decleration
    double radius = 5.0; //Decleration
    double area = PI * 2 * radius; //Calculation

    std::cout << "The area of the circle is: " << area << '\n';

    return 0;
}