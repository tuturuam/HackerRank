#include<iostream>
using namespace std;

class Person {
	public:
		string name;
		int age;
}
class Professor: public Person {
	int publications;
	int cur_id;
	int getdata() {
		
}
class Student: public Person{

}

int main() {
	int n, val;
	cin>>n;
	Person *per[n];

	for(int i = 0; i < n; i++) {
		cin >> val;
		if(val==1) {
			per[i]= new Professor;
		} else {
			per[i] = new Student;
		}
		per[i]->getdata();
	}

	for(int i = 0; i<n; i++)
		per[i]->putdata();
	
	return 0;
}
