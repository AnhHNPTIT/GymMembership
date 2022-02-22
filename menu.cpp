#include <iostream>
#include <string.h>
#include <iomanip>
#include "youth_account.cpp"
#include "normal_account.cpp"
#include "senior_account.cpp"

using namespace std;

class menu
{
    private:
		youth_account list_youth_account[1000];
		normal_account list_normal_account[1000];
		senior_account list_senior_account[1000];
		int num_youth_account = 0;
		int num_normal_account = 0;
		int num_senior_account = 0;
		
    public:
		menu(){
		}

		~menu(){
		}

		// Nhap lua chon theo menu de thuc hien
        void execute()
		{
			int num;
			do
			{
				cout<<"\n ================ GYM MEBERSHIP ================"<<endl;
				cout<<" | 1. Open a new account                         |"<<endl;
				cout<<" | 2. View an account                                   |"<<endl;
				cout<<" | 3. Close an account                                        |"<<endl;
				cout<<" | 4. Exit program            |"<<endl;
				cout<<" ======================================================"<<endl;
        	    cout<<"Enter a number to execute: "; 
				cin>>num;

        	    switch(num)
        	    {
        	    	case 1:
					{
						second_menu();
						break;
					}
					case 2:
					{
						cout << "Exit program!!!\n";
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
				cout<<"\n ================ GYM MEBERSHIP ================"<<endl;
				cout<<" | 1. Youth account                         |"<<endl;
				cout<<" | 2. Normal account                                   |"<<endl;
				cout<<" | 3. Senior account                                        |"<<endl;
				cout<<" | 4. Return to main menu            |"<<endl;
				cout<<" ======================================================"<<endl;
        	    cout<<"Enter a number to execute: "; 
				cin>>num;

        	    switch(num)
        	    {
        	    	case 1:
					{
						cout << "Exit program!!!\n";
						break;
					}
					case 2:
					{
						cout << "Enter an account number: " << endl;
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

};
