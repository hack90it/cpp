#include <iostream>
#include<string>
int stringlength(const std::string &str){
    return str.length();
}
int main()
{
    std::string str1="Hello, World!";
    std::string str2="c++ Programming";
    std::string str3="Data Structures & Algorithms";
    std::cout<<stringlength(str1)<<std::endl;
    std::cout<<stringlength(str2)<<std::endl;
    std::cout<<stringlength(str3);

    return 0;
}
