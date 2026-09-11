#include <iostream>

namespace first {
    int iNum1 = 10;
}

namespace second {
    int iNum1 = 20;
}

int main() {
    using namespace first;
    using namespace std;

   // int iNum1 = 5;
    cout << "The Value of iNum1 is : " << iNum1 << '\n';
    cout << "The Value of iNum1 is : " << second::iNum1 << '\n';
    
    return 0;
}