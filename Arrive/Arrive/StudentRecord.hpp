#pragma once

#include <string>

using std::string;

class StudentRecord
{
public:
	StudentRecord(string &name, int id, string &date);
	StudentRecord(const char *name, int id, const char *date);

	string getName();
	int getIDNum();
	string getDate();

private:
	string name;
	int id;
	string date;
};