#pragma once

#include <string>
#include <iostream>
#include <vector>

using std::string;

class String
{
private:
    string value;
    //unsigned length; //not a good practice to leave a value without initialization.
    size_t length;

public:
 //String(){std::cout << "The default value for length is: " << length << std::endl;}
 // 
 String():value{""},length(0){std::cout << "The default value for length is: " << length << std::endl;}
 String(string);
 void print() const;
 int readFromStream(std::istream&);
 size_t getLength() const;
 std::vector<string> split(const string& delimiter = " ") const;
 String getLowerCase() const;
};