#include "Book.h"

Book::Book()
{
    autor="No name";
	edition="No name";
	publication_date="No date";
	isbn=0;
}

Book::Book(string autor, string edition, string publication_date, long isbn)
{
	this->autor=autor;
	this->edition=edition;
	this->publication_date=publication_date;
	this->isbn=isbn;
}

void Book::set_autor(string autor)
{
	this->autor = autor;
}

void Book::set_edition(string edition)
{
	this->edition = edition;
}

void Book::set_publication_date(string publication_date)
{
	this->publication_date = publication_date;
}

void Book::set_isbn(long isbn)
{
	this->isbn = isbn;
}

string Book::get_autor() const
{
    return autor;
}

string Book::get_edition() const
{
    return edition;
}

string Book::get_publication_date() const
{
    return publication_date;
}

long Book::get_isbn() const
{
    return isbn;
}

void Book::showInfo() const
{
	
	cout << "Autor: " << autor << endl;
	cout << "Edition: " << edition << endl;
	cout << "Publication date: " << publication_date << endl;
	cout << "ISBN: " << isbn << endl<<endl;
};
