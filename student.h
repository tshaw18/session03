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

	Faculty(){
		name = "George Whitworth";
		id = 0;
		male = true;
	}

	Faculty(string n, bool m = true, string o = "n/a", string e = "n/a",
		string t = "n/a"){
		name = n; male = m; office = o; email = e; tele = t;
	}


	void Teach();
	void Advise();
};
#endif
