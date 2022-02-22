#include <iostream>
#include <string.h>
#include <iomanip>
#include "account.cpp"

using namespace std;

class youth_account : public account
{       
	public:
		youth_account(){
			account();
                  cost_per_month = 0;
                  amount_due = 0;
                  // type = account_type::type::YOUTH;
		}

		youth_account(char account_number[], char surname[], char forename[], char address[], int num_of_months, float cost_per_month)
		{
                  account(account_number, surname, forename, address, num_of_months);
                  cost_per_month = 50000;
                  amount_due = get_amount_due();
                  // type = account_type::type::YOUTH;
		}

            ~youth_account(){
		}
};
