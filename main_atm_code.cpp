/*
	ATM
	-> CHECK BALANCE
	-> CASH WITHDRAW
	-> USER DETAILS
	-> UPDATE MOBILE NUMBER
*/

#include<conio.h> //getch to hold the screen
#include<iostream> // using cin, cout from user
#include<string.h> // string libries to use
using namespace std; 

class atm //class atm
{
	private: //private variables
		long int account_No;
		string name;
		int PIN;
		double balance;
		string mobile_No;
	public: //public member functions
	
	    //setting data to the private variables
		void setData(long int account_No_a,string name_a,int PIN_a,double balance_a,
		string mobile_No_a)
		{
			account_No=account_No_a;
			name=name_a;
			PIN=PIN_a;
			balance=balance_a;
			mobile_No=mobile_No_a;	
		}
		
		//getAccountNo function is returning the users account number
		long int getAccountNo()
		{
			return account_No;
		}
		
		//getName  function is returning the users name
		string getName()
		{
			return name;
		}
		
		//getPIN function is to return the pin
		int getPIN()
		{
			return PIN;
		}
		
		//getBalance function is to return balance
		double getBalance()
		{
			return balance;
		}	
		
		//getMobile no is to return users mobile number
		string getMobileNo()
		{
			return mobile_No;
		}
		
		//setMobile function is updating the users
		void setMobile(string mob_prev, string mob_new)	
		{
			if(mob_prev == mobile_No) //checks with old mobile number
			{
				mobile_No=mob_new; //assigns the new mobile number to mobile No
				cout<<endl<<"Sucessfully Upadted the Mobile No.";
				_getch(); // hols the sceen until user press amy key
			}
			else
			{
				cout<<endl<<"Incorrect old mobile number!";
				_getch();
			}
		}
		
		//cashwithdraw fucntion is used to withdra money from atm
		void cashWithDraw(int amount_a)
		{
			if(amount_a > 0 && amount_a < balance) //checks amount withdraw is possible or not
			{
				balance-=amount_a;
				cout<<endl<<"Please collect your cash!";
				cout<<endl<<"Availabale balance : "<<balance;
				_getch();
			}
			else
			{
				cout<<endl<<"Invalid input or Insufficient balance.";
				_getch();
			}
		}
		
		
};

// main fucntion
int main()
{
	int choice=0;
	int enterPIN; // enter pin and account no for user authentication
	long int enterAccountNo;
	
	system("cls"); //make keep clean screen
	
	//creating user object
	atm user1;
	//set user details
	user1.setData(1234567,"gokul",8901,344560,"99769171xx");
	
	do
	{
		system("cls");
		
		cout<<endl<<"****Welcome to ATM****"<<endl;
		
		cout<<endl<<"Enter your account number : "; //from user
		cin>>enterAccountNo;
		
		cout<<endl<<"Enter the PIN : ";
		cin>>enterPIN;
		
		//check whether enter values matches with user details
		if((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
		{
			do
			{
				int amount=0;
				string oldMobileNo, newMobileNo; //declaring details of mobile number
				
				system("cls");
				
				//user interface
				cout<<endl<<"****Welcome to the ATM****"<<endl;
				cout<<endl<<"Select option ";
				cout<<endl<<"1. Check Balance ";
				cout<<endl<<"2. Cash Withdraw ";
				cout<<endl<<"3. Show user Details ";
				cout<<endl<<"4. Update Mobile Number ";
				cout<<endl<<"5. Exit "<<endl;
				
				cin>>choice; //taking user choice
				
				switch(choice)
				{
					case 1:
						//checking the balance of the user
						cout<<endl<<"Your Bankbalance us : "<<user1.getBalance();
						_getch();
						break;
						
					case 2:
						//withdraw cash from atm
						cout<<endl<<"Enter the Amount to withdraw : ";
						cin>>amount;
						user1.cashWithDraw(amount);	//calling cashwithdraw function and pasing the amount
						break;
						
				    case 3:
				    	//Show the userdetails
				    	cout<<endl<<"user details are : ";
				    	cout<<endl<<"-> Account no      : "<<user1.getAccountNo();
				    	cout<<endl<<"->Name of the user : "<<user1.getName();
				    	cout<<endl<<"->Balance          : "<<user1.getBalance();
				    	cout<<endl<<"->Mobile number    : "<<user1.getMobileNo();
				    	_getch();
				    	break;
				    	
				    case 4:
				    	//updating mobile number
				    	cout<<endl<<"Enter old mobile no : ";
				    	cin>>oldMobileNo;
				    	
				    	cout<<endl<<"Enter new Mobile no : ";
				    	cin>>newMobileNo;
				    	
				    	user1.setMobile(oldMobileNo,newMobileNo); //passing to setmobile function to change
				    	break;
				    	
				    case 5:
				    	exit(0); //exit from the application
				    	
				    default:
				    	cout<<endl<<"You entered the invalid data!!";		
				}
						
			}while(1);
			
		}
		else if(enterAccountNo != user1.getAccountNo())
		{
			cout<<endl<<"Enter the correct Account no!";
			break;
		}
		else if(enterPIN != user1.getPIN())
		{
			cout<<endl<<"Enter the correct Pin!";
			break;
		}
		else 
		{
			cout<<endl<<"Sorry, We couldnt help You Further!";
			break;
		}
		
		
	}while(1); // to run this loop infinite times
	
}



