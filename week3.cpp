#include <iostream>
#include<string>
int stringlength(const std::string &str){
    return str.length();
}
int countChar(const std::string &str, char ch){
    int count=0;
    for(char letter : str){
        if(letter==ch){
            count++;
        }
    }
    return count;
}
std::string concatStrings(const std::string &str1,const std::string &str2){
    return str1+str2;
}
int main()
{
    std::string str1="Hello, World!";
    char ch1='l';
    std::string str2="c++ Programming";
    char ch2='o';
    std::string str3="Data Structures & Algorithms";
    char ch3='c';
    std::string str4="Hello,";
    std::string str5="World!";
    std::string result=concatStrings(str4,str5);
    std::cout<<stringlength(str1)<<std::endl;
    std::cout<<countChar(str1,ch1)<<std::endl;
    std::cout<<stringlength(str2)<<std::endl;
    std::cout<<countChar(str2,ch2)<<std::endl;
    std::cout<<stringlength(str3)<<std::endl;
    std::cout<<countChar(str3,ch3)<<std::endl;
    std::cout<<result<<std::endl;

    return 0;
}
