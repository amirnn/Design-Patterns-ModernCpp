#include "String.h"
#include <stdexcept>
#include <boost/algorithm/string.hpp>

String::String(string s): value{s}{}
void String::print() const {
    std::cout << value << std::endl;
}

int String::readFromStream(std::istream& stream){
    std::getline(stream,value,stream.widen('\n'));
    if(stream.good())
        return 0;
    else
        throw std::runtime_error("Reading data failed.");
}

size_t String::length() const {
    return value.size();
}

std::vector<string> String::split(const string& delimiter) const {
    std::vector<string> parts;
    boost::split(parts, value, boost::is_any_of(delimiter), boost::token_compress_on);
    return parts;
}
string String::getLowerCase() const {
    return boost::to_lower_copy(value);
};