#include<string>
#include <sstream>
using namespace std;
template <class Type>  
string num2string(Type num)  
{   
    return to_string(num);      
} 

template <class Type>  
Type string2num(const string& str)  
{  
    istringstream isstream(str);  
    Type num;  
    isstream >> num;  
    return num;      
} 