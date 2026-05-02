#pragma once
#include <string>
#include <iostream>
#include "Book.h"
#include "Voice_recoding.h"
using namespace std;
class Talking_book:public Book,public Voice_recoding
{
protected:
	int tapes;
public:
	Talking_book();
	Talking_book(string autor, string edition, string publication_date, long isbn,
		string speaker, int duration, string recording_date, int tapes);

	void set_Tapes(int tapes);
	int get_Tapes() const;

	void showInfo() const;
};

