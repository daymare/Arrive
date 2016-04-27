#pragma once

#include "StudentRecord.hpp"
#include <vector>

using std::vector;

enum class RecordFilter
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

	void setFilter(RecordFilter &filter);
	void addRecord(StudentRecord &sr);

	vector<StudentRecord> getRecords();

	void clear();

private:
	vector<StudentRecord> records;
	RecordFilter filter;

};