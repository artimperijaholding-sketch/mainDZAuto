#include "Talking_book.h"

Talking_book::Talking_book()
{
    tapes = 0;
}

Talking_book::Talking_book(string autor, string edition, string publication_date, long isbn, string speaker, int duration, string recording_date, int tapes)
	: Book(autor, edition, publication_date, isbn), Voice_recoding(speaker, duration, recording_date)
{
	this->tapes = tapes;
}

void Talking_book::set_Tapes(int tapes)
{
	this->tapes = tapes;
}

int Talking_book::get_Tapes() const
{
    return tapes;
}

void Talking_book::showInfo() const
{
	Book::showInfo();
	Voice_recoding::showInfo();
	cout << "Tapes: " << tapes << endl;
}
