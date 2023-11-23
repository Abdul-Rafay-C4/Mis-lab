#include <iostream>

using namespace std;

	int main()
	{
		int userspend, point = 0;
		cout << "How much you spend today($): ";
		cin >> userspend;
		point = userspend/10;
		char ch;
		do 
		{
			int discount;
			char chpurchase;
			cout << "\nDo you want to purchse more(y/n) : ";
			cin >> chpurchase;
			if(chpurchase == 'y' || chpurchase == 'y') // ask for purchse
			{
				cout << "\nEnter how much you want to spend: ";
				cin >> userspend;
				cout << "\nYou have " << point << " loyalty points, do you want to use them for discount?(y/n) : ";
				cin >> ch ;
				if(ch == 'y' || ch == 'Y') // for discount
				{
					int userinp;
					discount = (point / 10) * 5; // calculating discount
					bool check;
					do
					{
						check = true;
						cout << "\nYou get discount of " << discount << "$" << " ,how much you want to spend : ";
						cin >> userinp;
						if(userinp > discount)
						{
							check = false; 
							cout << "\nInvalid Input.";
						}
					}while(check == false);
					point = 0;
					discount = discount - userinp;
					cout << "\nYour total bill is :" << userspend - userinp << "$" << endl; 
					point = (discount * 10) / 5;
				}
				point = point + (userspend/10); // if user not spend loyalty points
			}
			ch = 'n';
			cout << "\nNeed restart (y/n) : ";
			cin >> ch;
			cout << endl;
		}while(ch == 'y' || ch == 'Y');
		return 0;
	}
