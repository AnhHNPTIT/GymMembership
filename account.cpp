#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

class account
{
	protected: 

		char account_number[50];
		char surname[20];
        char forename[50];
        char address[255];
        int num_of_months;
        float cost_per_month;
        float amount_due;
        // char type[50];
        
	public:
		account(){
			strcpy(account_number,"");
			strcpy(surname,"");
            strcpy(forename,"");
            strcpy(address,"");
			num_of_months = 0;
		}

		account(char account_number[], char surname[], char forename[], char address[], int num_of_months)
		{
			strcpy(account_number, account_number);
			strcpy(surname, surname);
            strcpy(forename, forename);
            strcpy(address, address);
            num_of_months = num_of_months;
		}

		~account(){
		}

		void input()
		{
			cin.ignore();
			cout << "Enter account number: "; cin.getline(account_number, sizeof(account_number));
			cout << "Enter surname: "; cin.getline(surname, sizeof(surname));
            cout << "Enter forename: "; cin.getline(forename, sizeof(forename));
            cout << "Enter address: "; cin.getline(address, sizeof(address));
            cout << "Enter number of months: "; cin >> num_of_months;			
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
            // os << "Account type: " << acc.type << endl;			
		}
		// friend istream & operator>>(istream &is, account &acc)
		// {
		// 	is.ignore();
		// 	cout << "Enter account number: "; is.getline(acc.account_number, sizeof(acc.account_number));
		// 	cout << "Enter surname: "; is.getline(acc.surname, sizeof(acc.surname));
        //     cout << "Enter forename: "; is.getline(acc.forename, sizeof(acc.forename));
        //     cout << "Enter address: "; is.getline(acc.address, sizeof(acc.address));
        //     cout << "Enter number of months: "; is >> acc.num_of_months;
		// 	return is;
		// }

		// friend ostream & operator<<(ostream & os, account &acc)
		// {
		// 	os << "\n---------------- DETAIL INFORMATION -----------------"<<endl;
		// 	os << "Account number: " << acc.account_number << endl;
		// 	os << "Surname: " << acc.surname << endl;
        //     os << "Forename: " << acc.forename << endl;
        //     os << "Address: " << acc.address << endl;
        //     os << "Number of months: " << acc.num_of_months << endl;
        //     os << "Amount due: " << acc.amount_due << endl;
        //     // os << "Account type: " << acc.type << endl;
		// 	return os;
		// }

        float get_amount_due()
        {
            return cost_per_month * num_of_months;
        }
};
