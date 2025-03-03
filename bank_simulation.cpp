#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

float amount;


class user_account{
	public:
		
		int display(){
		cout << "Hello! Welcome" <<endl;
		cout << "How much is in your account?: ";
		cin >> amount;
		cout << "***************************************************" <<endl;
		cout << "***************************************************" <<endl;
		cout << "***************************************************" <<endl;
		
		
		return amount;
	}
};

class withdraw: public user_account{
	public:
		
		int display2(){
		cout << "Would you love to withdraw some money?: (Y or N) ";
		char user_choice;
		cin >> user_choice;
		
		cout << "***************************************************" <<endl;
		cout << "***************************************************" <<endl;
		cout << "***************************************************" <<endl;
		
		if(user_choice == 'Y' || user_choice == 'y'){
			cout << "Ok!, How much?: ";
			float withdraw;
			cin  >> withdraw;
			
			float total = amount - withdraw;
			cout << "New account balance is: " << total <<endl;
			cout << "***************************************************" <<endl;
			cout << "***************************************************" <<endl;
			cout << "***************************************************" <<endl;
		}
		
		cout << "Would you like to deposit?(Y or N): ";
		char user;
		cin >> user;
		
		cout << "***************************************************" <<endl;
		cout << "***************************************************" <<endl;
		cout << "***************************************************" <<endl;
		
		if(user == 'Y' || user == 'y'){
	
			cout << "How much would you like to deposit?: "; 
			float deposit_amount;
			cin >> deposit_amount;
		
		float new_total = amount + deposit_amount;
		cout << "Thank you for depositing " << deposit_amount << " in your account..." <<endl;
		cout << "Your new mobile account balanace is: " << new_total <<endl;
		
		cout << "***************************************************" <<endl;
		cout << "***************************************************" <<endl;
		cout << "***************************************************" <<endl;
			
		}else{
			cout << "Alright, please come by GTA bank...You are a Rockstar!";
		}
		
		
		
		return 0;
	}
		
};



int main(){
	
	//random no with time
	
	srand(static_cast < unsigned int>(time(0)));
	//generate a random 4 digit pin from 1000 t0 9999
	
	int random_pin = 1000 + rand() % 9000;
	
	cout << "WELCOME TO GRAND THEFT AUTO BANK..." <<endl;
	cout << "Your PIN to your account is: " << random_pin <<endl;
	
	int user_pin;
	cout << "Please, enter the 4 digit PIN: ";
	cin >> user_pin;
	
	if(user_pin == random_pin){
		cout << "Access granted...";
	}else if(user_pin != random_pin){
		cout << "Sorry, wrong PIN..try again" <<endl;
		return 1;
	}
	
	
	user_account mobile;
	mobile.display();
	
	
	withdraw remove;
	remove.display2();
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
