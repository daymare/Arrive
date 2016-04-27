#include "StudentRecord.hpp"

StudentRecord::StudentRecord(string & name, int id, string & date)
{
	this->name = name;
	this->id = id;
	this->date = date;
}

StudentRecord::StudentRecord(const char * name, int id, const char * date)
{
	this->name = string(name);
	this->id = id;
	this->date = string(date);
}

string StudentRecord::getName()
{
	return this->name;
}

int StudentRecord::getIDNum()
{
	return this->id;
}

string StudentRecord::getDate()
{
	return this->date;
}
