#include <string>
#include <iostream>
using namespace std;

class clsStudent
{
private:
    string _fistName, _lastName;
    bool _cs_std;

public:

    clsStudent(){
        _fistName = "";
        _lastName = "";
        _cs_std = false;
    }
    void setInformation(string fistName, string lastName){
        _fistName = fistName;
        _lastName = lastName;
    }
    void setCs(bool cs){
        _cs_std = cs;
    }
    string getallInfo(){
        return _fistName + " " + _lastName;
    }

    void dis(){
        cout<<"welcome usser to this platform";
    }

   
};

