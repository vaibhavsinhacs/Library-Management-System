// LIBRARY MANAGEMENT SYSTEM UNDER UNIVERSITY MANAGEMENT SYSTEM

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<conio.h>
#define cls() system("CLS")					//defining cls() for clearing screen
using namespace std;

class Library
{
public:
	void mainMenu();
	void student();
	void staff();
	void booksCategory(int);
	void modifyBooklist();
	void addBooks();
	void SCE();
};

void Library::mainMenu()						//function to display the main menu
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

void Library::staff()								//function to display options for staff
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
		booksCategory(2);
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

void Library::student()									//function to display options for students
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
		booksCategory(1);
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

void Library::booksCategory(int flag)				//function to display a list of category of books available in the library
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
		cls();
		SCE();
		break;
	case 2:
		cls();
		SCE();
		break;
	case 3:
		cls();
		SCE();
		break;
	case 4:
		cls();
		SCE();
		break;
	case 5:
		cls();
		SCE();
		break;
	case 6:
		cls();
		SCE();
		break;
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
		//(void)_getch();
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
	booksCategory(2);
}

void Library::SCE()
{
	char book[40], author[30], publication[40];
	int id, quantity;
	float price;
	ofstream fout;
	fout.open("Books.txt", ios::app);
	cout << "\t\t\tEnter the details of the book:-" << endl << endl;
	cin.ignore();
	cout << "\t\t\tEnter Book's Name: ";
	cin.getline(book, 30);
	cout << "\t\t\tEnter Author's Name: ";
	cin.getline(author, 30);
	cout << "\t\t\tEnter Publication Name: ";
	cin.getline(publication, 40);
	cout << "\t\t\tEnter Book's ID: ";
	cin >> id;
	cout << "\t\t\tEnter Book's Price: ";
	cin >> price;
	cout << "\t\t\tEnter Book's Quantity: ";
	cin >> quantity;
	fout << book << "\t\t" << author << "\t\t" << publication << "\t\t" << id << "\t\t" << price << "\t\t" << quantity << endl;
	fout.close();
	cout << "\t\t\t\n\nBook Added Successfully.\n\n";
	cout << "\t\t\tPress any key to continue";
	(void)_getch();
	staff();
}

int main()
{
	Library lib;
	lib.mainMenu();
	return 0;
}
