// LIBRARY MANAGEMENT UNDER UNIVERSITY MANAGEMENT SYSTEM

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<conio.h>
#define cls() system("CLS")		//defining cls() for clearing screen
using namespace std;

class Library
{
public:
	char book[50], author[50], publication[50], id[20];
	int quantity;
	float price;
	void getData();
	void showData();
	void mainMenu();
	void student();
	void staff();
	int booksCategory(int);
	void modifyBooklist();
	void addBooks();
	void viewBooks(int);
};

//function to get details of book
void Library::getData()
{
	cin.ignore();
	cout << "\t\t\t\t\t********** ENTER BOOK DETAILS **********";
	cout << "\n\n\n\t\t\tEnter Book's Name: ";
	cin.getline(book, 50);
	cout << "\n\t\t\tEnter Author's Name: ";
	cin.getline(author, 50);
	cout << "\n\t\t\tEnter Publication Name: ";
	cin.getline(publication, 50);
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
	cout << "\t\t\t\t\t1. View Category of Books\n\n" << "\t\t\t\t\t2. Search for a Book\n\n" << "\t\t\t\t\t3. Modify Booklist\n\n" << "\t\t\t\t\t4. Issue Book\n\n" << "\t\t\t\t\t5. Go to Main Menu\n\n" << "\t\t\t\t\t6. Exit Application\n\n";
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
		cout << "\t\t\t\t\tBook searching will happen here.\n\n";
		(void)_getch();
		//searchBook();
		break;
	case 3:
		modifyBooklist();
		break;
	case 4:
		cout << "\t\t\t\t\tBooks will be issued here.\n\n";
		(void)_getch();
		//issueBook();
		break;
	case 5:
		cls();
		mainMenu();
		break;
	case 6:
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
		cout << "\t\t\t\t\tBook searching will happen here.\n\n";
		(void)_getch();
		//searchBook();
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

void Library::modifyBooklist()
{
	cls();
	cout << "\t\t\t\t\t********** BOOKLIST MODIFICATION **********\n\n";
	cout << "\t\t\t\t\t>> Choose any option\n\n";
	cout << "\t\t\t\t\t1. Add Books\n\n" << "\t\t\t\t\t2. Remove Books\n\n" << "\t\t\t\t\t3. Modify Current Books\n\n" << "\t\t\t\t\t4. Go Back\n\n";
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
		cout << "\t\t\t\t\tRemove books from here.\n\n";
		(void)_getch();
		//removeBook();
		break;
	case 3:
		cout << "\t\t\t\t\tModify books here.\n\n";
		(void)_getch();
		//modifyBooks();
		break;
	case 4:
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

void Library::addBooks()
{
	cls();
	int aCategory = booksCategory(2);
	cls();
	getData();
	ofstream fout("Books.txt", ios::app);
	fout << book << endl << author << endl << publication << endl << id << endl << price << endl << quantity;
	fout.close();
	cout << "\n\n\t\t\tBook Added Successfully.";
	cout << "\n\n\t\t\tPress any key to continue";
	(void)_getch();
	modifyBooklist();
}

void Library::viewBooks(int flag)
{
	int serial_num = 0;
	cls();
	int vCategory = booksCategory(flag);
	cls();
	ifstream fin("Books.txt", ios::in);
	if (!fin)
		cout << "\n\t\tFile Not Found.";
	else
	{
		cout << "\t\t\t\t\t********** LIST OF BOOKS **********\n\n";
		fin.getline(book, 50);
		fin.getline(author, 50);
		fin.getline(publication, 50);
		fin >> id >> price >> quantity;
		while (1)
		{
			serial_num++;
			cout << "\n\t\t##### " << serial_num << " #####\n";
			showData();
			if (fin.eof())
				break;
			fin.getline(book, 50);
			fin.getline(author, 50);
			fin.getline(publication, 50);
			fin >> id >> price >> quantity;
		}
	}
	fin.close();
	cout << "\n\n\n\t\tPress any key to continue";
	(void)_getch();
	cls();
	if (flag == 1)
		student();
	else
		staff();
}

int main()
{
	Library lib;
	lib.mainMenu();
	return 0;
}
