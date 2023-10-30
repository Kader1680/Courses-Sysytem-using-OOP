
#include "./clsCourses.c++"
#include "./clsStudent.c++"
#include "./clsTeacher.c++"
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"---------------------   Class Courses using OOP  --------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"-------------------------  [1] Create Course ------------------------"<<endl;
    cout<<"-------------------------  [2] Category Course ------------------------"<<endl;
    cout<<"-------------------------  [3] Teacher Course ------------------------"<<endl;
    cout<<"-------------------------  [4] Login in system -----------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"enter number"<<endl;
    int choise;
    cin>>choise;
    if (choise == 1)
    {
        cout<<"enter name of the course"<<endl;
        string nameCourse;
        cin>>nameCourse;
        cout<<"enter timme of the course"<<endl;
        int timeCourses;
        cin>>timeCourses;
        clsCourses Course1;
        Course1.name = nameCourse;
        Course1.time= timeCourses;
        Course1.display();
    }else if (choise == 2)
    {
         // inisolze the object of student
        clsStudent s;
        s.setInformation("abdelkadder", "clever");
        cout<<s.getallInfo()<<endl;
        s.dis();

    }else{
    // inisolze the object of teacher
    clsTeacher t;
    t.setInformationTeacher("ahmed", "morad");
    cout<<t.getallInfo()<<endl;
    }
    
    
        

   
   
}
