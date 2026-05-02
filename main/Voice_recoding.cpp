#include "Voice_recoding.h"

Voice_recoding::Voice_recoding()
{
    speaker="No name";
	duration=0;
	recording_date="No date";
}

Voice_recoding::Voice_recoding(string speaker, int duration, string recording_date)
{
    this->speaker = speaker;
    this->duration = duration;
	this->recording_date = recording_date;
	
}

void Voice_recoding::set_speaker(string speaker)
{
    this->speaker = speaker;
}

void Voice_recoding::set_duration(int duration)
{
	this->duration = duration;
}

void Voice_recoding::set_recording_date(string recording_date)
{
	this->recording_date = recording_date;
}

string Voice_recoding::get_speaker() const
{
    return speaker;
}

int Voice_recoding::get_duration() const
{
    return duration;
}

string Voice_recoding::get_recording_date() const
{
    return recording_date;
}

void Voice_recoding::showInfo() const
{
    
	cout<<"Speaker: "<<speaker<<endl;
	cout<<"Duration: "<<duration<<endl;
	cout<<"Recording date: "<<recording_date<<endl<<endl;
}
