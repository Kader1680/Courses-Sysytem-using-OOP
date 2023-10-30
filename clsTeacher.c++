#include <iostream>
#include <string>
using namespace std;

class clsTeacher
{
private:
    string _NameTeacher, _specilise;
public:
    clsTeacher(){
        _NameTeacher = "";
        _specilise = "";
    }
    void setInformationTeacher(string NmTeacher, string spc){
        _NameTeacher = NmTeacher;
        _specilise = spc;
    }
    
    string getallInfo(){
        return "the Mentor " + _NameTeacher + " is specialised in  " + _specilise;
    }
};


