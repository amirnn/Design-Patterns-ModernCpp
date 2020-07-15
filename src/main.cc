#include <iostream>
#include "String.h"


int main(int argc, char const *argv[])
{

    String myString("Hello There");
    myString.print();
    try
    {
        myString.readFromStream(std::cin);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    myString.print();
    return 0;
}
