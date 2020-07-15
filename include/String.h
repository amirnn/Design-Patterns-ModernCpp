#pragma once

#include <string>
#include <iostream>
#include <vector>

using std::string;

class String
{
private:
    string value;
public:
 String(string);
 void print() const;
 int readFromStream(std::istream&);
 size_t length() const;
 std::vector<string> split(const string& delimiter = " ") const;
 string getLowerCase() const;

};