//7)Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the marks
//obtained in two subjects and class result contains the total marks obtained in
//the test. The class result can inherit the details of the marks obtained in the
//test and roll number of students. (Multilevel Inheritance).
#include<iostream>
using namespace std;

class A{
	public:
		fun1()
		{
			
			string name;
			int rollno;
			cout<<"Enter the name :";  // student name
			cin>>name;
			cout<<"Enter the roll no :"; // student roll no
			cin>>rollno;
		}
};

class B{
	public:
		fun2()
		{
			int sci,maths,ss,hindi,eng; // user input marks
			cout<<"Sci :";
			cin>>sci;
			cout<<"Maths :";
			cin>>maths;
			cout<<"Eng: ";
			cin>>eng;
			cout<<"S.s :";
			cin>>ss;
			cout<<"hindi :";
			cin>>hindi;
		}
};

class C:public A,public B{
	public:
		fun3()
		{ 
		    
			int avarage,sci,maths,ss,hindi,eng,total;
			total=sci+maths+eng+ss+hindi;    //all subject total
			avarage=total*100/500;         // find avarage and total
			cout<<"Total is :"<<total;
			cout<<"avarage is :"<<avarage;
		}
};

main()
{
	C obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	
}
