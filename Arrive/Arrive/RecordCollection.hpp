#pragma once

#include "StudentRecord.hpp"
#include <vector>
#include <algorithm>

using std::vector;

enum class RecordSort
{
	ASC,
	DESC,
	ID_ASC,
	ID_DESC,
	DATE_ASC,
	DATE_DESC
};

class RecordCollection
{
public:
	RecordCollection();

	void setSort(const RecordSort &sort);
	void setFilter(string &filter);
	void addRecord(StudentRecord &sr);

	void getRecords(vector<StudentRecord> * recs);

	void clear();

private:
	vector<StudentRecord> records;
	RecordSort sort;
	string filter;

	void sortRecs();

	static bool sortByIDASC(StudentRecord &s1, StudentRecord &s2);
	static bool sortByIDDESC(StudentRecord &s1, StudentRecord &s2);
	static bool sortByNameASC(StudentRecord &s1, StudentRecord &s2);
	static bool sortByNameDESC(StudentRecord &s1, StudentRecord &s2);
	static bool sortByDateASC(StudentRecord &s1, StudentRecord &s2);
	static bool sortByDateDESC(StudentRecord &s1, StudentRecord &s2);

};