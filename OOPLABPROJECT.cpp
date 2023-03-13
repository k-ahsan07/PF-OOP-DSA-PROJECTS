#include <iostream>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <windows.h>
#include <vector>

using namespace std;

int i,n;

ifstream fin;
ofstream fout;
fstream fio;
void disp();

class SHOP
{
public:
	SHOP() {}

	virtual void show() = 0;
};

class Customer : public SHOP
{
protected:
	char custname[50];
	long long int contactno;
	char address[50];
	char payment[10];

public:
	void readinfo();
	void show(){};
};

class Invoice : public Customer
{
	char invprodname[50];
	int invprodqty;
	int total;
	int noofprod;
	int orderid;
public:
	Invoice() {}

	void setprodname(char *a)
	{
		strcpy(invprodname, a);
	}

	void setprodqty(int a)
	{
		invprodqty = a;
	}

	void setTotal(int a)
	{
		total = a;
	}

	int getorderid()
	{
		return orderid;
	}

	void show();
	void show(int);
	friend void searching();
	friend void saving();
};

void Customer ::readinfo()
{
	system("cls");
	cout << "\n===================================================\n";
	cout << "\t\tKINDLY ENTER YOUR DETAILS";
	cout << "\n===================================================\n\n\n";
	try
	{
      cout << "\t\t->Enter your name: ";
      cin.getline(custname, 50);
      cout << "\n\n\t\t->Enter your contact no: ";
      cin >> contactno;
      cout << "\n\t\t->Enter your address: ";
      fflush(stdin);
      cin.getline(address, 50);
	  cout << "\n\n\t\t->Enter payment method (COD or Card): ";
	  cin >> payment;
	}
	catch(exception)
	{
	    cout << "Exception occurred.";
	}
}

void Invoice ::show()
{
	int randno = (rand() % 100) + 1;
	orderid=randno;

	system("cls");

	cout << "\t\t\t=====================================================\n\n";
	cout << "\t\t\t\t\t  YOUR INVOICE";
    cout << "\n\n\t\t\t=====================================================\n";
	cout << "\t\t\t\t\t  ORDER INFO";
	cout << "\n\t\t\t=====================================================\n\n";
	cout << "\t\t\t\t\tOrder id: " << orderid;
	cout << "\n\t\t\t\t\tProduct name: " << invprodname;
	cout << "\n\t\t\t\t\tProduct qty: " << invprodqty;
    cout << "\n\n\t\t\t=====================================================\n";
	cout << "\t\t\t\t\t  CUSTOMER INFO";
	cout << "\n\t\t\t=====================================================\n\n";
	cout << "\t\t\t\t\tCustomer Name: " << custname;
	cout << "\n\t\t\t\t\tContact No: " << contactno;
	cout << "\n\t\t\t\t\tDelivery Address: " << address;
	cout << "\n\t\t\t\t\tPayment Method: " << payment;
	cout << "\n\n\t\t\t======================================================";

	if (strcmp(payment, "COD") == 0)
	{
		cout << "\n\n\t\t\t\t\tTotal(inc. TAX): " << total;
        cout << "\n\n\t\t\t======================================================";
	}
	else
	{
	    cout << "\n\n\t\t\t\t\tTotal(inc. TAX): " << total;
        cout << "\n\t\t\t\t\tAfter Discount: " << total * 0.9;
        cout << "\n\n\t\t\t======================================================";
	}
}

void Invoice ::show(int a)
{
    system("cls");

	cout << "\t\t\t=====================================================\n\n";
	cout << "\t\t\t\t\t  YOUR INVOICE";
    cout << "\n\n\t\t\t=====================================================\n";
	cout << "\t\t\t\t\t  ORDER INFO";
	cout << "\n\t\t\t=====================================================\n\n";
	cout << "\t\t\t\t\tOrder id: " << orderid;
	cout << "\n\t\t\t\t\tProduct name: " << invprodname;
	cout << "\n\t\t\t\t\tProduct qty: " << invprodqty;
    cout << "\n\n\t\t\t=====================================================\n";
	cout << "\t\t\t\t\t  CUSTOMER INFO";
	cout << "\n\t\t\t=====================================================\n\n";
	cout << "\t\t\t\t\tCustomer Name: " << custname;
	cout << "\n\t\t\t\t\tContact No: " << contactno;
	cout << "\n\t\t\t\t\tDelivery Address: " << address;
	cout << "\n\t\t\t\t\tPayment Method: " << payment;
	cout << "\n\n\t\t\t======================================================";

	if (strcmp(payment, "COD") == 0)
	{
		cout << "\n\n\t\t\t\t\tTotal(inc. TAX): " << total;
        cout << "\n\n\t\t\t======================================================";
	}
	else
	{
	    cout << "\n\n\t\t\t\t\tTotal(inc. TAX): " << total;
        cout << "\n\t\t\t\t\tAfter Discount: " << total * 0.9;
        cout << "\n\n\t\t\t======================================================";
	}
}

class stock : public SHOP
{
	char name[20], pass[15];
	float pr;
	int quant;

public:
	void get();
	void get(int);
	void show();
	int stchk(char nm[30]);
	void withd(int qty);
	void stkrefil(int qty);
	friend void withdraw(Invoice &);
} st;

void stock::withd(int qty)
{
	if (quant >= qty)
	{
		quant -= qty;
		cout << "\n\nStock updated!!\n";
	}
	else
	{
		cout << "\n\nInsufficient stock";
		getch();
		exit(0);
	}
}

void stock::stkrefil(int qty)
{
	quant += qty;
	cout << "\n\nStock updated!!";
	getch();
}

int stock::stchk(char nm[30])
{
	if (strcmp(nm, name) == 0)
		return 0;
	else
		return 1;
}

void stock::get()
{
	cin >> name >> pr >> quant;
}

void stock::get(int a)
{
	cin >> name >> quant;
}

void stock::show()
{

	cout << "\n"
		 << name << "\t\t\t" << quant << "\t\t\t" << pr;
}

void addnew()
{
	system("cls");
	disp();
	getch();
	system("cls");

	cout << "\n->Enter the No. of Products that you wish to add: ";
	cin >> n;

	if (n != 0)
	{
		int j, l, sum = 0;
		fout.open("shop.txt", ios::app);
		for (i = 0; i < n; i++)
		{
		    try
		    {
		        cout << "\n\n->Input the name, price and the quantity of item respectively\n\n";
			    st.get();
			    fout.write((char *)&st, sizeof(st));
			    cout << "\n\nitem updated!!";
			    cin.get();
		    }
		    catch(exception)
		    {
		        cout << "Exception occurred.";
		    }
		}
		cout << "\n\nStock Updated!!";

		fout.close();
		cin.get();
		system("cls");
		disp();
	}
	else
	{
		fout.close();
		cin.get();
		system("cls");
		cout << "\n\nNo items to be added..";
	}
}

void withdraw(Invoice &obj)
{
	system("cls");
	char temp[100];
	int qty;
	int i = 0;
	long pos = 0;
	disp();
	try
	{
	    cout << "\n\n->Enter the product's name: \n"
        << endl;
	    cin >> temp;
	    cout << "\n\n->Enter quantity: \n"
        << endl;
	    cin >> qty;
	}
	catch(exception)
	{
	    getch();
	    cout << "Exception occurred.";
	}
	obj.setprodname(temp);
	obj.setTotal(st.pr * qty);
	obj.setprodqty(qty);

	fio.open("shop.txt", ios::out | ios::in);
	while (fio)
	{
		pos = fio.tellp();
		fio.read((char *)&st, sizeof(st));
		if (st.stchk(temp) == 0)
		{
			st.withd(qty);
			fio.seekp(pos);
			fio.write((char *)&st, sizeof(st));
			i++;
			break;
		}
	}

	if (i != 1)
		cout << "\n\n!!Record not found :( !!";

	fio.close();
	cin.get();
	system("cls");
	disp();
	getch();
}

void disp()
{
	int i = 1;
	cout << "\n==================================================================";
	cout << "\n\n=================\tTHE STOCK ITEMS ARE\t==================";
	cout << "\n\n==================================================================\n";
	cout << "\n\nPARTICULARS\t STOCK AVAILABLE\t\tPRICE";
	cout << "\n\n============================================================\n";
	fin.open("shop.txt");
	while (!fin.eof())
	{
		fin.read((char *)&st, sizeof(st));
		if (!fin.eof())
		{
			if (fin.tellg() < 0)
			{
				i = 0;
				break;
			}
			st.show();
		}
	}

	if (i == 0)
	{
		cout << "\n\n\t\t\t!!Empty record room!!";
		getch();
	}
	fin.close();
}

void refill()
{
	system("cls");
	char temp[100];
	int qty;
	int i = 0;
	long pos = 0;
	disp();
	try
	{
	    cout << "\n\n->Enter the products name \n"
        << endl;
	    cin >> temp;
	    cout << "\n\n->Enter quantity: \n"
        << endl;
        cin >> qty;
	}
	catch(exception)
	{
	    getch();
	    cout << "Exception occurred";
	}

	fio.open("shop.txt", ios::out | ios::in);

	while (fio)
	{
		pos = fio.tellp();
		fio.read((char *)&st, sizeof(st));

		if (st.stchk(temp) == 0)
		{
			st.stkrefil(qty);
			fio.seekp(pos);
			fio.write((char *)&st, sizeof(st));
			i++;
			break;
		}
	}
	if (i != 1)
		cout << "\n\n!!Record not found :( !!";

	fio.close();
	system("cls");
	cin.get();
	disp();
	cin.get();
}

void remove()
{
	system("cls");
	int i = 0;
	char temp[30];
	cout << "\n\t\t\t\tDelete Record";
	cout << "\n\n->Enter the name of the product:";
	cin >> temp;

	fout.open("temp.txt");
	fin.open("shop.txt");
	while (!fin.eof())
	{
		fin.read((char *)&st, sizeof(st));
		if (!fin.eof())
			if (st.stchk(temp) == 0)
			{
				st.show();
				cout << "\n\n\t\tRecord deleted";
				i++;
			}
			else
				fout.write((char *)&st, sizeof(st));
	}
	if (i == 0)
		cout << "\n\n!!Record not found :( !!";

	fin.close();
	fout.close();
	remove("shop.txt");
	rename("temp.txt", "shop.txt");
}

void custservice()
{
	system("cls");
	ifstream r("Helpline.txt");

	cout << "\n=========================================================\n";
	cout << "\t\t\t-> FAQS";
	cout << "\n=========================================================\n";

	while (r)
	{
		string a;
		getline(r, a);
		cout << a << endl;
	}
	cout << "=========================================================\n\n";
	r.close();
}

void saving(ofstream &save, Invoice &obj)
{
	save.write((char *)&obj, sizeof(obj));
}

void searching()
{
	int id;

    system("cls");
	cout << "->Enter an id you want to search: ";
	cin >> id;

	ifstream access("Invoice.txt");

	Invoice obj1;
	access.read((char *)&obj1, sizeof(obj1));
	if (obj1.getorderid()==id)
	{
		obj1.show(0);
	}
	access.close();
}

void mainmenu()
{
	system("cls");
	cout << "\n  \t\t\t::::::::::::::::::::::::::  ABC ELECTRONIC MART  ::::::::::::::::::::::::::  \n";
	cout << " \n                               =============================================================";
	cout << "\n\n\t\t               \xDB\xDB\xDB\xDB\xB2 1. Admin Menu\n\n\t\t               \xDB\xDB\xDB\xDB\xB2 2. Customer Menu\n\n\t\t               \xDB\xDB\xDB\xDB\xB2 3. Exit";
	cout << "\n\n                               =============================================================\n";
}

void adminmenu()
{
	system("cls");
	cout << "=================================================================";
	cout << "\n\n\t\t\t    ADMIN MENU\n\xDB\xDB\xB2 1. Add new product\n\n\xDB\xDB\xB2 2. Display stock\n\n\xDB\xDB\xB2 3. Refill\n\n\xDB\xDB\xB2 4. Remove an item\n\n\xDB\xDB\xB2 5. Exit:";
	cout << "\n\n\n==========================END OF MENU=============================";
}

void customermenu()
{
	system("cls");
	cout << "=================================================================";
	cout << "\n\n\t\t\t    CUSTOMER MENU\n\n\xDB\xDB\xB2 1. Purchase\n\n\xDB\xDB\xB2 2. Display stock\n\n\xDB\xDB\xB2 3. See Invoice\n\n\xDB\xDB\xB2 4. Customer Service\n\n\xDB\xDB\xB2 5. Exit:";
	cout << "\n\n\n==========================END OF MENU=============================";
}

bool login();
void exefunc()
{
	int i, j;
mainmenu:
	mainmenu();
	cout << "\n\n\t\t\t\t-> Enter Your Choice: ";
	cin >> j;

	if (j == 1)
	{
		system("cls");
		if (login())
		{
			system("cls");
		    adminmenu:
			adminmenu();
			cout << "\n\n ->Enter your Choice :\t";
			cin >> i;
			if (i == 1)
			{
				addnew();
				getch();
				goto adminmenu;
			}
			else if (i == 2)
			{
				system("cls");
				disp();
				getch();
				goto adminmenu;
			}
			else if (i == 3)
			{
				refill();
				goto adminmenu;
			}
			else if (i == 4)
			{
				remove();
				getch();
				goto adminmenu;
			}
			else
			{
				getch();
				goto mainmenu;
			}
		}
		else
		{
			cout << "\n\n\n\t\t\t\t\tINPUT CORRECT PASSWORD!!!\n\n";
			getch();
			getch();
			exit(0);
		}
	}
	if (j == 2)
	{

	custmenu:
		customermenu();
		cout << "\n\n ->Enter your Choice :\t";
		cin >> i;

		if (i == 1)
		{
			Invoice obj;
			withdraw(obj);
			getch();
			obj.readinfo();
			obj.show();
			getch();

			ofstream s("Invoice.txt");
			saving(s, obj);
			s.close();
			getch();
			goto custmenu;
		}
		else if (i == 2)
		{
			system("cls");
			disp();
			getch();
			goto custmenu;
		}
		else if (i == 3)
		{
			searching();
			getch();
			goto custmenu;
		}
		else if (i == 4)
		{
			custservice();
			getch();
			goto custmenu;
		}
		else
		{
			system("cls");
			cout << "\n\n\n\t\t\tTHANK YOU!";
			getch();
			goto mainmenu;
		}
	}
	else
	{
		system("cls");
		cout << "\n\n\n\n\n";
		cout << "\t\t\t\n                                =-=-=-=-=-=-=-=-=-=-=-                                ";
		cout << "\t\t\t\n                                =                    -                                ";
		cout << "\t\t\t\n                                =                    -                                ";
		cout << "\t\t\t\n                                =  HAVE A NICE DAY!  -                                ";
		cout << "\t\t\t\n                                =                    -                                ";
		cout << "\t\t\t\n                                =                    -                                ";
		cout << "\t\t\t\n                                =-=-=-=-=-=-=-=-=-=-=-                                ";
		cout << "\n\n\n\n\n";
		exit(0);
	}
	getch();
}

bool login()
{
    string password = "";
    char c = ' ';

    system("cls");
	cout << "\n     \t\t\t\t\t******************";
	cout << "\n     \t\t\t\t\t*                *";
	cout << "\n     \t\t\t\t\t*                *";
	cout << "\n     \t\t\t\t\t*    PASSWORD    *";
	cout << "\n     \t\t\t\t\t*   locked yet.. *";
	cout << "\n     \t\t\t\t\t*                *";
	cout << "\n     \t\t\t\t\t******************";
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\tPlease Enter the Password: ";

    while (true)
    {
        c = getch();
        if (c == '\r')
		break;
        if (c == '\0')
		continue;
        if (c == '\b')
        {
            if (password.length() > 0)
            {
                password.pop_back();
                cout << "\b \b";
            }
        }
        else
        {
            cout << "*";
            password.push_back(c);
        }
    }

    if (password == "OOPLAB")
    {
        return true;
    }
    else
    {
        return false;
    }
}

void SLEEP(string a)
{
	for (int i = 0; i < a.length(); i++)
	{
		cout << a[i];
		Sleep(75);
	}
}

COORD coord = {0, 0};
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void loading()
{
	cout << "\t\t\t\t\t";

	for(int loadd = 0; loadd <= 1000; loadd++)
	{
		gotoxy(30, 18);
		cout<<"loading: "<<loadd/100;
	}
}

int main()
{
	srand((unsigned)time(0));
	cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t";
	SLEEP("|============ WELCOME TO ABC ELECTRONIC MART ============|");
	gotoxy(30,15);
	loading();
    system("cls");
	exefunc();
}
