#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
class Student{
	private:
		string name;
		int age;
		int GPA;
		public:
			Student();
			Student(string n,int a,int G);
			~Student();
			string getName();
			int getAge();
			int  getGPA(); 
}
#endif 
