// LIBRARY MANAGEMENT UNDER UNIVERSITY MANAGEMENT SYSTEM

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<conio.h>
#include<limits.h>
#define cls() system("CLS")		//defining cls() for clearing screen
using namespace std;

class Library
{
public:
	char book[100], author[100], publication[100], id[20];
	float price;
	int quantity;
	void getData();
	void showData();
	void mainMenu();
	void student();
	void staff();
	int booksCategory(int);
	void modifyBooklist();
	void addBooks();
	void viewBooks(int);
	void removeBook();
	void searchBook(int);
	void issueBook();
	void returnBook();
};

//function to get details of book
void Library::getData()
{
	cin.ignore();
	cout << "\t\t\t\t\t********** ENTER BOOK DETAILS **********";
	cout << "\n\n\n\t\t\tEnter Book's Name: ";
	cin.getline(book, 100);
	cout << "\n\t\t\tEnter Author's Name: ";
	cin.getline(author, 100);
	cout << "\n\t\t\tEnter Publication Name: ";
	cin.getline(publication, 100);
	cout << "\n\t\t\tEnter Book's ID: ";
	cin >> id;
	cout << "\n\t\t\tEnter Book's Price: ";
	cin >> price;
	cout << "\n\t\t\tEnter Book's Quantity: ";
	cin >> quantity;
}

//function to display details of book(s)
void Library::showData()
{
	cout << "\n\t\tName of the book: " << book;
	cout << "\n\n\t\tAuthor's name: " << author;
	cout << "\n\n\t\tPublication's name: " << publication;
	cout << "\n\n\t\tBook's ID: " << id;
	cout << "\n\n\t\tPrice of the book: " << price;
	cout << "\n\n\t\tNumber of books available: " << quantity << endl << endl;
}

//function to display the main menu
void Library::mainMenu()
{
	int choice;
	cout << "\t\t\t\t\t********** LIBRARY DETAILS **********\n\n";
	cout << "\t\t\t\t\t>> Choose any option\n\n";
	cout << "\t\t\t\t\t1. Student\n\n" << "\t\t\t\t\t2. Staff\n\n" << "\t\t\t\t\t3. Exit Application\n\n";
	cout << "\t\t\t\t\tEnter choice: ";
	cin >> choice;
	cout << endl << endl;
	switch (choice)
	{
	case 1:
		student();
		break;
	case 2:
		staff();
		break;
	case 3:
		exit(0);
		break;
	default:
		cout << "\t\t\t\t\tInvalid choice.\n\n";
		cout << "\t\t\t\t\tPress any key to be able to enter a valid choice\n\n";
		(void)_getch();
		cls();
		mainMenu();
	}
}

//function to display options for staff
void Library::staff()
{
	cls();
	cout << "\t\t\t\t\t********** WELCOME STAFF **********\n\n";
	cout << "\t\t\t\t\t>> Choose any option\n\n";
	cout << "\t\t\t\t\t1. View Category of Books\n\n" << "\t\t\t\t\t2. Search for a Book\n\n" << "\t\t\t\t\t3. Modify Booklist\n\n" << "\t\t\t\t\t4. Go to Main Menu\n\n" << "\t\t\t\t\t5. Exit Application\n\n";
	cout << "\t\t\t\t\tEnter choice: ";
	int choice;
	cin >> choice;
	cout << endl << endl;
	switch (choice)
	{
	case 1:
		viewBooks(2);
		break;
	case 2:
		searchBook(2);
		break;
	case 3:
		modifyBooklist();
		break;
	case 4:
		cls();
		mainMenu();
		break;
	case 5:
		exit(0);
	default:
		cout << "\t\t\t\t\tInvalid choice.\n\n";
		cout << "\t\t\t\t\tPress any key to be able to enter a valid choice\n\n";
		(void)_getch();
		cls();
		staff();
	}
}

//function to display options for students
void Library::student()
{
	cls();
	cout << "\t\t\t\t\t********** WELCOME STUDENT **********\n\n";
	cout << "\t\t\t\t\t>> Choose any option\n\n";
	cout << "\t\t\t\t\t1. View Category of Books\n\n" << "\t\t\t\t\t2. Search for a Book\n\n" << "\t\t\t\t\t3. Go to Main Menu\n\n" << "\t\t\t\t\t4. Exit Application\n\n";
	cout << "\t\t\t\t\tEnter choice: ";
	int choice;
	cin >> choice;
	cout << endl << endl;
	switch (choice)
	{
	case 1:
		viewBooks(1);
		break;
	case 2:
		searchBook(1);
		break;
	case 3:
		cls();
		mainMenu();
		break;
	case 4:
		exit(0);
	default:
		cout << "\t\t\t\t\tInvalid choice.\n\n";
		cout << "\t\t\t\t\tPress any key to be able to enter a valid choice\n\n";
		(void)_getch();
		cls();
		student();
	}
}

//function to display a list of category of books available in the library
int Library::booksCategory(int flag)
{
	cls();
	cout << "\t\t\t\t\t********** CATEGORY OF BOOKS **********\n\n";
	cout << "\t\t\t\t\t>> Select a Category\n\n";
	cout << "\t\t\t\t\t1. School of Computer Engineering\n\n" << "\t\t\t\t\t2. School of Electronics Engineering\n\n" << "\t\t\t\t\t3. School of Electrical Engineering\n\n" << "\t\t\t\t\t4. School of Mechanical Engineering\n\n" << "\t\t\t\t\t5. School of Civil Engineering\n\n" << "\t\t\t\t\t6. First Year\n\n" << "\t\t\t\t\t7. Go Back\n\n" << "\t\t\t\t\t8. Go to Main Menu\n\n";
	cout << "\t\t\t\t\tEnter choice: ";
	int choice;
	cin >> choice;
	cout << endl << endl;
	switch (choice)
	{
	case 1:
		return 1;
		break;
	case 2:
		return 2;
	case 3:
		return 3;
	case 4:
		return 4;
	case 5:
		return 5;
	case 6:
		return 6;
	case 7:
		cls();
		if (flag == 1)
			student();
		else
			staff();
		break;
	case 8:
		cls();
		mainMenu();
		break;
	default:
		cout << "\t\t\t\t\tInvalid choice.\n\n";
		cout << "\t\t\t\t\tPress any key to be able to enter a valid choice\n\n";
		(void)_getch();
		cls();
		booksCategory(flag);
	}
}

//function to modify list of books
void Library::modifyBooklist()
{
	cls();
	cout << "\t\t\t\t\t********** BOOKLIST MODIFICATION **********\n\n";
	cout << "\t\t\t\t\t>> Choose any option\n\n";
	cout << "\t\t\t\t\t1. Add Books\n\n" << "\t\t\t\t\t2. Remove Books\n\n" << "\t\t\t\t\t3. Issue Book\n\n" << "\t\t\t\t\t4. Return Book\n\n" << "\t\t\t\t\t5. Go Back\n\n";
	cout << "\t\t\t\t\tEnter choice: ";
	int choice;
	cin >> choice;
	cout << endl << endl;
	switch (choice)
	{
	case 1:
		addBooks();
		break;
	case 2:
		removeBook();
		break;
	case 3:
		issueBook();
		break;
	case 4:
		returnBook();
		break;
	case 5:
		cls();
		staff();
		break;
	default:
		cout << "\t\t\t\t\tInvalid choice.\n\n";
		cout << "\t\t\t\t\tPress any key to be able to enter a valid choice\n\n";
		(void)_getch();
		cls();
		modifyBooklist();
	}
}

//function to add books
void Library::addBooks()
{
	cls();
	int aCategory = booksCategory(2);
	cls();
	getData();
	if (aCategory == 1)
	{
		ofstream fout("csBooks.txt", ios::app);
		fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
		fout.close();
	}
	if (aCategory == 2)
	{
		ofstream fout("eceBooks.txt", ios::app);
		fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
		fout.close();
	}
	if (aCategory == 3)
	{
		ofstream fout("elecBooks.txt", ios::app);
		fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
		fout.close();
	}
	if (aCategory == 4)
	{
		ofstream fout("mechBooks.txt", ios::app);
		fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
		fout.close();
	}
	if (aCategory == 5)
	{
		ofstream fout("civilBooks.txt", ios::app);
		fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
		fout.close();
	}
	if (aCategory == 6)
	{
		ofstream fout("yearOneBooks.txt", ios::app);
		fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
		fout.close();
	}
	cout << "\n\n\t\t\tBook Added Successfully.";
	cout << "\n\n\t\t\tPress any key to continue";
	(void)_getch();
	modifyBooklist();
}

//function to view list of books
void Library::viewBooks(int flag)
{
	int serial_num = 0;
	cls();
	int vCategory = booksCategory(flag);
	cls();
	if (vCategory == 1)
	{
		ifstream fin("csBooks.txt", ios::in);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\t\t\t\t\t********** LIST OF BOOKS **********\n\n";
			fin.getline(book, 100);
			fin.getline(author, 100);
			fin.getline(publication, 100);
			fin >> id >> price >> quantity;
			while (1)
			{
				if (book[0] == '\0')
				{
					cout << "\n\n\t\t\t\t\t\tNO BOOK AVAILABLE";
					break;
				}
				serial_num++;
				cout << "\n\t\t\t##### " << serial_num << " #####\n";
				showData();
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
			}
		}
		fin.close();
	}
	if (vCategory == 2)
	{
		ifstream fin("eceBooks.txt", ios::in);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\t\t\t\t\t********** LIST OF BOOKS **********\n\n";
			fin.getline(book, 100);
			fin.getline(author, 100);
			fin.getline(publication, 100);
			fin >> id >> price >> quantity;
			while (1)
			{
				if (book[0] == '\0')
				{
					cout << "\n\n\t\t\t\t\t\tNO BOOK AVAILABLE";
					break;
				}
				serial_num++;
				cout << "\n\t\t\t##### " << serial_num << " #####\n";
				showData();
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
			}
		}
		fin.close();
	}
	if (vCategory == 3)
	{
		ifstream fin("elecBooks.txt", ios::in);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\t\t\t\t\t********** LIST OF BOOKS **********\n\n";
			fin.getline(book, 100);
			fin.getline(author, 100);
			fin.getline(publication, 100);
			fin >> id >> price >> quantity;
			while (1)
			{
				if (book[0] == '\0')
				{
					cout << "\n\n\t\t\t\t\t\tNO BOOK AVAILABLE";
					break;
				}
				serial_num++;
				cout << "\n\t\t\t##### " << serial_num << " #####\n";
				showData();
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
			}
		}
		fin.close();
	}
	if (vCategory == 4)
	{
		ifstream fin("mechBooks.txt", ios::in);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\t\t\t\t\t********** LIST OF BOOKS **********\n\n";
			fin.getline(book, 100);
			fin.getline(author, 100);
			fin.getline(publication, 100);
			fin >> id >> price >> quantity;
			while (1)
			{
				if (book[0] == '\0')
				{
					cout << "\n\n\t\t\t\t\t\tNO BOOK AVAILABLE";
					break;
				}
				serial_num++;
				cout << "\n\t\t\t##### " << serial_num << " #####\n";
				showData();
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
			}
		}
		fin.close();
	}
	if (vCategory == 5)
	{
		ifstream fin("civilBooks.txt", ios::in);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\t\t\t\t\t********** LIST OF BOOKS **********\n\n";
			fin.getline(book, 100);
			fin.getline(author, 100);
			fin.getline(publication, 100);
			fin >> id >> price >> quantity;
			while (1)
			{
				if (book[0] == '\0')
				{
					cout << "\n\n\t\t\t\t\t\tNO BOOK AVAILABLE";
					break;
				}
				serial_num++;
				cout << "\n\t\t\t##### " << serial_num << " #####\n";
				showData();
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
			}
		}
		fin.close();
	}
	if (vCategory == 6)
	{
		ifstream fin("yearOneBooks.txt", ios::in);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\t\t\t\t\t********** LIST OF BOOKS **********\n\n";
			fin.getline(book, 100);
			fin.getline(author, 100);
			fin.getline(publication, 100);
			fin >> id >> price >> quantity;
			while (1)
			{
				if (book[0] == '\0')
				{
					cout << "\n\n\t\t\t\t\t\tNO BOOK AVAILABLE";
					break;
				}
				serial_num++;
				cout << "\n\t\t\t##### " << serial_num << " #####\n";
				showData();
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
			}
		}
		fin.close();
	}
	cout << "\n\n\n\t\tPress any key to continue";
	(void)_getch();
	cls();
	if (flag == 1)
		student();
	else
		staff();
}

//function to remove books
void Library::removeBook()
{
	cls();
	int rCategory = booksCategory(2);
	cls();
	int result = INT_MIN;
	char delBook[100];
	if (rCategory == 1)
	{
		ifstream fin("csBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\n\t\t\tEnter Books's Name: ";
			cin.ignore();
			cin.getline(delBook, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(delBook, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
			}
		}
		fout.close();
		fin.close();
		remove("csBooks.txt");
		result = rename("tempFile.txt", "csBooks.txt");
	}
	if (rCategory == 2)
	{
		ifstream fin("eceBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\n\t\t\tEnter Books's Name: ";
			cin.ignore();
			cin.getline(delBook, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(delBook, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
			}
		}
		fout.close();
		fin.close();
		remove("eceBooks.txt");
		result = rename("tempFile.txt", "eceBooks.txt");
	}
	if (rCategory == 3)
	{
		ifstream fin("elecBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\n\t\t\tEnter Books's Name: ";
			cin.ignore();
			cin.getline(delBook, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(delBook, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
			}
		}
		fout.close();
		fin.close();
		remove("elecBooks.txt");
		result = rename("tempFile.txt", "elecBooks.txt");
	}
	if (rCategory == 4)
	{
		ifstream fin("mechBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\n\t\t\tEnter Books's Name: ";
			cin.ignore();
			cin.getline(delBook, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(delBook, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
			}
		}
		fout.close();
		fin.close();
		remove("mechBooks.txt");
		result = rename("tempFile.txt", "mechBooks.txt");
	}
	if (rCategory == 5)
	{
		ifstream fin("civilBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\n\t\t\tEnter Books's Name: ";
			cin.ignore();
			cin.getline(delBook, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(delBook, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
			}
		}
		fout.close();
		fin.close();
		remove("civilBooks.txt");
		result = rename("tempFile.txt", "civilBooks.txt");
	}
	if (rCategory == 6)
	{
		ifstream fin("yearOneBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\n\t\t\tEnter Books's Name: ";
			cin.ignore();
			cin.getline(delBook, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(delBook, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
			}
		}
		fout.close();
		fin.close();
		remove("yearOneBooks.txt");
		result = rename("tempFile.txt", "yearOneBooks.txt");
	}
	if (result == 0)
		cout << "\n\n\t\t\tBook Deleted Successfully.";
	cout << "\n\n\t\t\tPress any key to continue";
	(void)_getch();
	modifyBooklist();
}

//function to search books
void Library::searchBook(int flag)
{
	cls();
	int sCategory = booksCategory(2);
	cls();
	int choice;
	char bookName[100], bookID[20];
	int var = 1;
	cout << "\t\t\t\t\t********** SEARCH BOOK **********\n\n";
	cout << "\t\t\t\t\t>> Choose any option\n\n";
	cout << "\t\t\t\t\t1. Search by name\n\n" << "\t\t\t\t\t2. Search by ID\n\n" << "\t\t\t\t\t3. Go Back\n\n";
	cout << "\t\t\t\t\tEnter choice: ";
	cin >> choice;
	cout << endl << endl;
	switch (choice)
	{
	case 1:
		cls();
		if (sCategory == 1)
		{
			ifstream fin("csBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's Name: ";
				cin.ignore();
				cin.getline(bookName, 100);
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookName, book) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 2)
		{
			ifstream fin("eceBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's Name: ";
				cin.ignore();
				cin.getline(bookName, 100);
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookName, book) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 3)
		{
			ifstream fin("elecBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's Name: ";
				cin.ignore();
				cin.getline(bookName, 100);
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookName, book) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 4)
		{
			ifstream fin("mechBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's Name: ";
				cin.ignore();
				cin.getline(bookName, 100);
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookName, book) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 5)
		{
			ifstream fin("civilBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's Name: ";
				cin.ignore();
				cin.getline(bookName, 100);
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookName, book) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 6)
		{
			ifstream fin("yearOneBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's Name: ";
				cin.ignore();
				cin.getline(bookName, 100);
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookName, book) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		break;
	case 2:
		cls();
		if (sCategory == 1)
		{
			ifstream fin("csBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's ID: ";
				cin.ignore();
				cin >> bookID;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookID, id) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 2)
		{
			ifstream fin("eceBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's ID: ";
				cin.ignore();
				cin >> bookID;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookID, id) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 3)
		{
			ifstream fin("elecBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's ID: ";
				cin.ignore();
				cin >> bookID;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookID, id) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 4)
		{
			ifstream fin("mechBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's ID: ";
				cin.ignore();
				cin >> bookID;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookID, id) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 5)
		{
			ifstream fin("civilBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's ID: ";
				cin.ignore();
				cin >> bookID;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookID, id) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		if (sCategory == 6)
		{
			ifstream fin("yearOneBooks.txt", ios::in);
			if (!fin)
				cout << "\n\t\tFile Not Found.";
			else
			{
				cout << "\n\t\tEnter Book's ID: ";
				cin.ignore();
				cin >> bookID;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				while (1)
				{
					if (strcmp(bookID, id) == 0)
					{
						cout << "\n\n\t\t##### SEARCH RESULTS #####\n";
						showData();
						var++;
					}
					if (fin.eof())
						break;
					fin.getline(book, 100);
					fin.getline(author, 100);
					fin.getline(publication, 100);
					fin >> id >> price >> quantity;
				}
				fin.close();
			}
			if (var == 1)
				cout << "\n\n\t\t\tBOOK NOT FOUND";
			cout << "\n\n\n\t\tPress any key to continue";
			(void)_getch();
			if (flag == 1)
				student();
			else
				staff();
		}
		break;
	case 3:
		cls();
		if (flag == 1)
			student();
		else
			staff();
		break;
	default:
		cout << "\n\t\t\t\t\tInvalid choice.\n\n";
		cout << "\n\n\t\t\t\t\tPress any key to be able to enter a valid choice\n\n";
		(void)_getch();
		cls();
		searchBook(flag);
	}
}

//function to issue books
void Library::issueBook()
{
	cls();
	int iCategory = booksCategory(2);
	cls();
	char bookName[100];
	int result = INT_MIN;
	if (iCategory == 1)
	{
		ifstream fin("csBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity - 1;
			}
		}
		fout.close();
		fin.close();
		remove("csBooks.txt");
		result = rename("tempFile.txt", "csbooks.txt");
	}
	if (iCategory == 2)
	{
		ifstream fin("eceBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity - 1;
			}
		}
		fout.close();
		fin.close();
		remove("eceBooks.txt");
		result = rename("tempFile.txt", "ecebooks.txt");
	}
	if (iCategory == 3)
	{
		ifstream fin("elecBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity - 1;
			}
		}
		fout.close();
		fin.close();
		remove("elecBooks.txt");
		result = rename("tempFile.txt", "elecbooks.txt");
	}
	if (iCategory == 4)
	{
		ifstream fin("mechBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity - 1;
			}
		}
		fout.close();
		fin.close();
		remove("mechBooks.txt");
		result = rename("tempFile.txt", "mechbooks.txt");
	}
	if (iCategory == 5)
	{
		ifstream fin("civilBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity - 1;
			}
		}
		fout.close();
		fin.close();
		remove("civilBooks.txt");
		result = rename("tempFile.txt", "civilbooks.txt");
	}
	if (iCategory == 6)
	{
		ifstream fin("yearOneBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity - 1;
			}
		}
		fout.close();
		fin.close();
		remove("yearOneBooks.txt");
		result = rename("tempFile.txt", "yearOnebooks.txt");
	}
	if (result == 0)
		cout << "\n\n\t\t\tBook Issued Successfully.";
	cout << "\n\n\t\t\tPress any key to continue";
	(void)_getch();
	modifyBooklist();
}

//funtion to return book
void Library::returnBook()
{
	cls();
	int rtCategory = booksCategory(2);
	cls();
	char bookName[100];
	int result = INT_MIN;
	if (rtCategory == 1)
	{
		ifstream fin("csBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity + 1;
			}
		}
		fout.close();
		fin.close();
		remove("csBooks.txt");
		result = rename("tempFile.txt", "csbooks.txt");
	}
	if (rtCategory == 2)
	{
		ifstream fin("eceBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity + 1;
			}
		}
		fout.close();
		fin.close();
		remove("eceBooks.txt");
		result = rename("tempFile.txt", "ecebooks.txt");
	}
	if (rtCategory == 3)
	{
		ifstream fin("elecBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity + 1;
			}
		}
		fout.close();
		fin.close();
		remove("elecBooks.txt");
		result = rename("tempFile.txt", "elecbooks.txt");
	}
	if (rtCategory == 4)
	{
		ifstream fin("mechBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity + 1;
			}
		}
		fout.close();
		fin.close();
		remove("mechBooks.txt");
		result = rename("tempFile.txt", "mechbooks.txt");
	}
	if (rtCategory == 5)
	{
		ifstream fin("civilBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity + 1;
			}
		}
		fout.close();
		fin.close();
		remove("civilBooks.txt");
		result = rename("tempFile.txt", "civilbooks.txt");
	}
	if (rtCategory == 6)
	{
		ifstream fin("yearOneBooks.txt", ios::in);
		ofstream fout("tempFile.txt", ios::app);
		if (!fin)
			cout << "\n\t\tFile Not Found.";
		else
		{
			cout << "\n\t\tEnter Book's Name: ";
			cin.ignore();
			cin.getline(bookName, 100);
			while (1)
			{
				if (fin.eof())
					break;
				fin.getline(book, 100);
				fin.getline(author, 100);
				fin.getline(publication, 100);
				fin >> id >> price >> quantity;
				if (strcmp(bookName, book) != 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
				if (strcmp(bookName, book) == 0)
					fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity + 1;
			}
		}
		fout.close();
		fin.close();
		remove("yearOneBooks.txt");
		result = rename("tempFile.txt", "yearOnebooks.txt");
	}
	if (result == 0)
		cout << "\n\n\t\t\tBook Return Success.";
	cout << "\n\n\t\t\tPress any key to continue";
	(void)_getch();
	modifyBooklist();
}

//driver function
int main()
{
	Library lib;
	lib.mainMenu();
	return 0;
}
