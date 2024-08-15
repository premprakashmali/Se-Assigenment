//2.Define a class to represent a bank account. Include the following members:
//1. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account

#include<iostream>
using namespace std;

class Bank {
    public:
        string name;
        int account, deposit, deposit3;
        int add, widra;

    public:
        void details(string name, int account, int deposit) {
            this->name = name;
            this->account = account;
            this->deposit = deposit;
        }

        void deposit1(int add) {
            this->add = add;
        }

        void show() {
            deposit3 = this->deposit + this->add;
            this->deposit3 = deposit3;
            cout << "Your total deposit is: " << this->deposit3 << endl;
        }

        void withdraw(int wi) {
            this->widra = wi;
        }

        void show1() {
            cout << "Your balance is: " << this->deposit3 - this->widra << endl;
        }
};

int main() {
    Bank obj;
    string name;
    int account, deposit, add, wi;
    int choice;

    // User input for bank details
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your account number: ";
    cin >> account;
    cout << "Enter your initial deposit amount: ";
    cin >> deposit;
    obj.details(name, account, deposit);
    
    
    cout<<"Welcome to Banking process"<<endl;
    cout<<"1. Deposite money"<<endl;
    cout<<"2. withdraw money"<<endl;
    cout<<"3. show balance"<<endl;
    cout<<"4. Exit"<<endl;
    
    while(1)
    {
    	
    	cout<<"Enter the choice :";
    	cin>>choice;
    	
    	if(choice==1){
    	  cout << "Enter amount to deposit: ";
          cin >> add;
          obj.deposit1(add);
          obj.show();
    		
		}
		else if(choice==2){
		   cout << "Enter amount to withdraw: "<<endl;
           cin >> wi;
           obj.withdraw(wi);
           obj.show1();
			
		}
		else if(choice==3){
			obj.show1();
		}
		else if(choice==4){
	      cout<<"Exiting program..." <<endl;
		}
		else{
	      cout<<"Invalid choice! Please try again."<<endl;
	      
		}
	}
  

    return 0;
}

