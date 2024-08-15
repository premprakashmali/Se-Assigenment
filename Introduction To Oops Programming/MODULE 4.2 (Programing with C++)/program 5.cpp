//5)Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)

#include<iostream>
using namespace std;

class A{
	public:
		string name;
};

class Batsman:public A{
	public :
		int totalruns;
		float Averageruns;
		int bestperformance;
		int match;
		
		input()
		{
			cout<<"Enter number of played matches : ";
			cin>>match;
			
			cout<<"Enter total runs scored :";
			cin>>totalruns;
			cout<<"Enter best performence :";
			cin>>bestperformance;
		}
		
		Average()
		{
	        Averageruns=totalruns/(float)match;
		}
		
		display()
		{
			cout<<"------Cricketer Details------"<<endl;
			cout<<"Cricketer Name :"<<name<<endl;
			cout<<" Matches Played  :"<<match<<endl;
			cout<<"Total Runs :"<<totalruns<<endl;
			cout<<"Average Runs :"<<Averageruns<<endl;	
			cout<<" Best Performance : "<<bestperformance<<endl;
		}
};

main()
{
	string name;
		cout<<"Enter Cricketer Name : ";  //enter name of Cricketer
		getline(cin,name);
		
		Batsman obj; // object for class 
		obj.input();
		obj.Average();
	    obj.display();
		
}
