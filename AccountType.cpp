#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
class AccountType
{
	public:
		enum account_type {
			YOUTH = 1,
			NORMAL = 2,
			SENIOR = 3
		};

		string get_account_type(account_type type)
		{
			string result;
			switch (type)
			{
				case YOUTH:
				{
					result = "YOUTH";
					break;
				}
				case NORMAL:
				{
					result = "NORMAL";
					break;
				}
				case SENIOR:
				{
					result = "SENIOR";
					break;
				}
				default:
				{
					
				}
			}
			return result;
		}

};