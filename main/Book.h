#pragma once
#include <string>
#include <iostream>
using namespace std;
class Book
{
protected:
	string autor;
	string edition;
	string publication_date;
	long isbn;
public:
	Book();
	Book(string autor, string edition, string publication_date, long isbn);
	
	void set_autor(string autor);
	void set_edition(string edition);
	void set_publication_date(string publication_date);
	void set_isbn(long isbn);
	string get_autor()const;
	string get_edition()const;
	string get_publication_date()const;
	long get_isbn()const;

	void showInfo()const;
};

