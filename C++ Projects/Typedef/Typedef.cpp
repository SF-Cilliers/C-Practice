#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> PairList_t;

typedef std::string str_t;
typedef int Int_t;

using text_t = std::string;
using Int_t = int;

int main() {

    //instead of using std::vector<std::pair<std::string, int>> we can use PairList_t
    PairList_t myList;

    //instead of using std::string we can use str_t
    str_t sText = "Hello, World!";

    std::cout << sText << '\n';

    Int_t iNum = 42;

    std::cout <<iNum << '\n';

    //Using instead of typedef

    text_t myText = "Using text_t instead of std::string";
    std::cout << myText << '\n';

    Int_t myInt = 100;
    std::cout << myInt << '\n';
    
}
