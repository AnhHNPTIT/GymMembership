#include <iostream>
#include <string.h>
#include <iomanip>
#include "Account.cpp"

using namespace std;

class Menu
{
    private:
		YouthAccount list_youth_account[1000];
		NormalAccount list_normal_account[1000];
		SeniorAccount list_senior_account[1000];
		int num_youth_account = 0;
		int num_normal_account = 0;
		int num_senior_account = 0;
		
    public:
		Menu(){
		}

		// Nhap lua chon theo menu de thuc hien
        void execute()
		{
			int num;
			do
			{
				cout << " ================ GYM MEBERSHIP =================" << endl;
				cout << " | 1. Open a new account                        |" << endl;
				cout << " | 2. View an account                           |" << endl;
				cout << " | 3. Close an account                          |" << endl;
				cout << " | 4. Exit program                              |" << endl;
				cout << " ================================================" << endl;
        	    cout << "Enter a number to execute: "; 
				cin >> num;

        	    switch(num)
        	    {
        	    	case 1:
					{
						second_menu();
						break;
					}
					case 2:
					{
						char acc_num_tmp[50];
						cout << "Enter an account number: " << endl;
						cin.ignore();
						cin.getline(acc_num_tmp, sizeof(acc_num_tmp));
						view_account(acc_num_tmp);
						break;
					}
					case 3:
					{
						cout << "Exit program!!!\n";
						break;
					}				
					case 4:
					{
						cout << "Exit program!!!\n";
						exit(1);
					}
                    default :
                    { 
                        cout << "You chose the wrong menu. Please choose again!" << endl;
					} 
				}
			}
			while(num!=4);
		}

		// Nhap lua chon theo menu de thuc hien
        void second_menu()
		{
			int num;
			do
			{
				cout << " ================ GYM MEBERSHIP ================" << endl;
				cout << " | 1. Youth account                            |" << endl;
				cout << " | 2. Normal account                           |" << endl;
				cout << " | 3. Senior account                           |" << endl;
				cout << " | 4. Return to main menu           	       |" << endl;
				cout << " ===============================================" << endl;
        	    cout << "Enter a number to execute: "; 
				cin >> num;

        	    switch(num)
        	    {
        	    	case 1:
					{		
						char acc_num_tmp[50];
						cout << "Enter account number: "; 
						cin.ignore();
						cin.getline(acc_num_tmp, sizeof(acc_num_tmp));

						break;
					}
					case 2:
					{
						char acc_num_tmp[50];
						cout << "Enter account number: "; 
						cin.ignore();
						cin.getline(acc_num_tmp, sizeof(acc_num_tmp));
						open_normal_account(acc_num_tmp);
						break;
					}
					case 3:
					{
						cout << "Exit program!!!\n";
						break;
					}				
					case 4:
					{
						execute();
						exit(1);
					}
                    default :
                    { 
                        cout << "You chose the wrong menu. Please choose again!" << endl;
					} 
				}
			}
			while(num!=4);
		}

		bool is_exist_account(char acc_num[])
		{
			for (int i = 0; i < num_youth_account; i++)
			{
				if(strcmp(list_youth_account[i].get_account_number(), acc_num) == 0)
				{
					return true;
				}
			}

			for (int i = 0; i < num_normal_account; i++)
			{
				if(strcmp(list_normal_account[i].get_account_number(), acc_num) == 0)
				{
					return true;
				}
			}

			for (int i = 0; i < num_senior_account; i++)
			{
				if(strcmp(list_senior_account[i].get_account_number(), acc_num) == 0)
				{
					return true;
				}
			}

			return false;			
		}

		void view_account(char acc_num[])
		{
			if (is_exist_account(acc_num))
			{
				for (int i = 0; i < num_youth_account; i++)
				{
					if(strcmp(list_youth_account[i].get_account_number(), acc_num) == 0)
					{
						list_youth_account[i].display();
						exit;
					}
				}

				for (int i = 0; i < num_normal_account; i++)
				{
					if(strcmp(list_normal_account[i].get_account_number(), acc_num) == 0)
					{
						list_normal_account[i].display();
						exit;
					}
				}

				for (int i = 0; i < num_senior_account; i++)
				{
					if(strcmp(list_senior_account[i].get_account_number(), acc_num) == 0)
					{
						list_senior_account[i].display();
						exit;
					}
				}
			}
		}

		void open_normal_account(char acc_num[])
		{
			if (!is_exist_account(acc_num))
			{
				list_normal_account[num_normal_account].set_account_number(acc_num);
				// if (list_normal_account[num_normal_account].input())
				// {
					// NormalAccount account(list_normal_account[num_normal_account].get_account_number(),
					// 					list_normal_account[num_normal_account].get_surname(),
					// 					list_normal_account[num_normal_account].get_forename(),
					// 					list_normal_account[num_normal_account].get_address(),
					// 					list_normal_account[num_normal_account].get_num_of_months());
					// cout << "aaa: " << list_normal_account[num_normal_account].get_account_number()<< endl;
					NormalAccount account("aaaa", "aaaa", "aaaa", "aaaa", 3);
					account.display();
					account.write_file();
					num_normal_account++;
				// }
			}
		}

};
