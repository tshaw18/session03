#include <string>
#include "faculty.h"
#ifndef FACULTY_H_
#define FACULTY_H_
#endif


class Student {
private:
    int &id;
    
public:
    
    string name;
    bool male;
    Faculty advisor;
    int getID(){
        return id;
    }
    
    
    void Study();
    void DoHomework();
    bool Register(string className);
    bool ChangeAdvisor(string name);
    
    
    Student (string name, int id, bool male = true);
};
