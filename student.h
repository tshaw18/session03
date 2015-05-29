#include <string>
#include "faculty.h"
using namespace std;


class Student {
private:
	int id;

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


	Student(string n, int i, bool m = true) {
		name = n;
		id = i;
		male = m;
	}
};
