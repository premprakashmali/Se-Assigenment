//1) WAP to create simple calculator using class 
#include<iostream>
using namespace std;


class Calculator{
	public:
		int a,b;
		Add(){
			  //input the number for addition
			cout<<"Enter the first number :";   
			cin>>a;
			cout<<"Enter the second number :";
			cin>>b;
			
			cout<<"Addition is :"<<a+b<<endl;      // show output
			
		}
		Sub(){
			//input the number for Substraction
			cout<<"Enter the first number :";
			cin>>a;
			cout<<"Enter the second number :";
			cin>>b;
			
			cout<<"Substraction is :"<<a-b<<endl;	
		}
		Multi(){
			//input the number for Multiplication
			cout<<"Enter the first number :";
			cin>>a;
			cout<<"Enter the second number :";
			cin>>b;
			
			cout<<"Multiplication is :"<<a*b<<endl;	
		}
		Divi(){
			//input the number for Division
			cout<<"Enter the first number :";
			cin>>a;
			cout<<"Enter the second number :";
			cin>>b;
			
			cout<<"Division is :"<<a/b<<endl;	
		}
		Modules(){
			//input the number for Modules
			cout<<"Enter the first number :";
			cin>>a;
			cout<<"Enter the second number :";
			cin>>b;
			
			cout<<"Modules is :"<<a%b<<endl;	
		}
	
};

 main()
 {
 	Calculator obj;
 	obj.Add();
 	obj.Sub();
 	obj.Multi();
 	obj.Divi();
 	obj.Modules();
 	
 }

