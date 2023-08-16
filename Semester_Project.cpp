#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int rollNumber;
	int age;
	string address;
	string phone;
	float marks[5];
	float totalMarks;
	float percentage;
	
	void getStudentDetails(){
		cout <<"Enter student name:";
		getline(cin,name);
		cout <<"Enter roll number:";
		cin >> rollNumber;
		cout <<"Enter age:";
		cin >> age;
		cin.ignore();
		cout <<"Enter address:";
		getline(cin,address);
		cout <<"Enter phone number:";
		getline(cin,phone);
		cout << endl;
	}
	
	void getMarks(){
		cout <<"Enter marks for 5 subjects:" << endl;
		for(int i=0;i<5;i++){
			cout <<"Subject" <<i+1<<":";
			cin >> marks[i];
			totalMarks +=marks[i];
		}
		percentage = totalMarks / 5.0f;
	}
	
	void displayStudentDetails(){
		cout << "Name:" << name << endl;
		cout << "Roll Number:" <<
	rollNumber << endl;
	    cout <<"Age:" << age << endl;
	    cout <<"Address:" << address << endl;
	    cout <<"Phone Number:" << phone << endl;
	    cout << endl;
	    
	    cout <<"Marks:" << endl;
	    for(int i=0;i<5;i++){
	    	cout <<"Subject" <<i+1<<":"<<marks[i]<< endl;
			}
	    	cout.precision(2);
	    	cout.setf(ios::fixed);
	    	cout <<"Total Marks:"<<
	    totalMarks << endl;
	        cout.precision(4);
	        cout.setf(ios::fixed);
	        cout <<"Percentage:"<<
	    percentage * 100.0f<< "%" << endl;
		}
	};
	
	int main()
	{
		Student student;
		
		student.getStudentDetails();
		student.getMarks();
		student.displayStudentDetails();
		
		return 0;
}

	
			
			
			
			
			
		
		
	
	

