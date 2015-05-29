#include <string>
#ifndef FACULTY_H_
#define FACULTY_H_
using namespace std;

class Faculty {
private:
    int id;
public:
    
    string name;
    string office;
    string email;
    string tele;
    bool male;
    int NewID;
    
    int GetID();
    void SetID();
    
    Faculty (string n, bool male = true, string office = "n/a", string email = "n/a",
             string tele = "n/a");
    
    
    void Teach();
    void Advise();
};
#endif
