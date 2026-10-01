#include<iostream>

int main(){

    using namespace std;

    int iMark;
    double dAvg;

    for (int i = 1; i < 6; i++)
    {
        cout << "Enter mark " << i << ": ";
        cin >> iMark;
        dAvg += iMark;
    }

    cout << "The average mark of the 5 marks is: " << dAvg /5;

    return 0;

}