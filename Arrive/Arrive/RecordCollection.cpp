#include "RecordCollection.hpp"

RecordCollection::RecordCollection()
{
	this->filter = RecordFilter::ASC;
}

void RecordCollection::setFilter(RecordFilter &filter)
{
	this->filter = filter;
}

void RecordCollection::clear()
{
	this->records.clear();
}

void RecordCollection::addRecord(StudentRecord &sr)
{
	this->records.push_back(sr);
}

vector<StudentRecord> RecordCollection::getRecords()
{
	return this->records;
}