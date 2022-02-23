#include <iostream>
#include <string.h>
#include <fstream>
#include "AccountType.cpp"

using namespace std;

class Account : public AccountType
{
	protected: 
		char account_number[50];
		char surname[20];
        char forename[50];
        char address[255];
        int num_of_months;
        float cost_per_month;
        float amount_due;
        account_type type;
        
	public:
		Account(){
			strcpy(account_number,"");
			strcpy(surname,"");
            strcpy(forename,"");
            strcpy(address,"");
			num_of_months = 0;
		}
		
		bool input()
		{
			cout << "Enter surname: "; cin.getline(surname, sizeof(surname));
            cout << "Enter forename: "; cin.getline(forename, sizeof(forename));
            cout << "Enter address: "; cin.getline(address, sizeof(address));
            cout << "Enter number of months: "; cin >> num_of_months;	
			if (num_of_months > 0)
			{
				return true;
			}		
			return false;
		}

		void display()
		{
			cout << "\n---------------- DETAIL INFORMATION -----------------"<<endl;
			cout << "Account number: " << account_number << endl;
			cout << "Surname: " << surname << endl;
            cout << "Forename: " << forename << endl;
            cout << "Address: " << address << endl;
            cout << "Number of months: " << num_of_months << endl;
            cout << "Amount due: " << amount_due << endl;
            cout << "Account type: " << type << endl;			
		}

        float get_amount_due()
        {
            return cost_per_month * num_of_months;
        }

		char* get_account_number()
		{
			return account_number;
		}

		char* get_surname()
		{
			return surname;
		}

		char* get_forename()
		{
			return forename;
		}

		char* get_address()
		{
			return address;
		}

		int get_num_of_months()
		{
			return num_of_months;
		}

		void set_account_number(char acc_num[])
		{
			strcpy(account_number, acc_num);
		}

		void write_file()
		{
			ofstream file("GymMembership.out",ios::out);
			file << account_number << "   ";
			file << surname << "   ";
            file << forename << "   ";
            file << address << "   ";
            file << num_of_months << "   ";
            file << amount_due << "   ";
            file << type << endl;
		}
};

class YouthAccount : public Account
{       
	public:
		YouthAccount(){
			Account();
			cost_per_month = 0;
			amount_due = 0;
			type = account_type::YOUTH;
		}

		YouthAccount(char acc[], char sur[], char fore[], char add[], int num)
		{
			Account::set_account_number(acc);
			cost_per_month = 50000;
			amount_due = Account::get_amount_due();
			type = account_type::YOUTH;
		}

};

class NormalAccount : public Account
{       
	public:
		NormalAccount(){
			Account();
			cost_per_month = 0;
			amount_due = 0;
			type = account_type::NORMAL;
		}

		NormalAccount(char acc[], char sur[], char fore[], char add[], int num)
		{
			Account::set_account_number(acc);
			cost_per_month = 100000;
			amount_due = Account::get_amount_due();
			type = account_type::NORMAL;
		}

};

class SeniorAccount : public Account
{       
	public:
		SeniorAccount(){
			Account();
			cost_per_month = 0;
			amount_due = 0;
			type = account_type::SENIOR;
		}

		SeniorAccount(char acc[], char sur[], char fore[], char add[], int num)
		{
			Account::set_account_number(acc);
			cost_per_month = 200000;
			amount_due = Account::get_amount_due();
			type = account_type::SENIOR;
		}

};

