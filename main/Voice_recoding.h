#pragma once
#include <string>
#include <iostream>
using namespace std;
class Voice_recoding
{
protected:
	string speaker;
	int duration;
	string recording_date;
public:
	Voice_recoding();
	Voice_recoding(string speaker, int duration, string recording_date);

	void set_speaker(string speaker);
	void set_duration(int duration);
	void set_recording_date(string recording_date);

	string get_speaker()const;
	int get_duration()const;
	string get_recording_date()const;

	void showInfo()const;
};

