#include "RecordCollection.hpp"

RecordCollection::RecordCollection()
{
	this->sort = RecordSort::ASC;
	this->filter = "";
}

void RecordCollection::setFilter(string &filter)
{
	this->filter = filter;
}

void RecordCollection::setSort(const RecordSort &rs)
{
	this->sort = rs;
}

void RecordCollection::clear()
{
	this->records.clear();
}

void RecordCollection::addRecord(StudentRecord &sr)
{
	this->records.push_back(sr);
}

void RecordCollection::getRecords(vector<StudentRecord> *recs)
{
	sortRecs();
	for (StudentRecord sr : this->records)
	{
		bool toAdd = false;

		if (filter != "")
		{
			switch (this->sort)
			{
			case RecordSort::ID_ASC:
			case RecordSort::ID_DESC:
				if (std::to_string(sr.getIDNum()).find(filter) != std::string::npos)
				{
					toAdd = true;
				}
				break;
			case RecordSort::ASC:
			case RecordSort::DESC:
				if (sr.getName().find(filter) != std::string::npos)
				{
					toAdd = true;
				}
				break;
			case RecordSort::DATE_ASC:
			case RecordSort::DATE_DESC:
				if (sr.getDate().find(filter) != std::string::npos)
				{
					toAdd = true;
				}
				break;
			}
		}
		else
		{
			toAdd = true;
		}

		if (toAdd)
			recs->push_back(sr);
	}
}

void RecordCollection::sortRecs()
{
	switch (this->sort)
	{
	case RecordSort::ID_ASC:
		std::sort(this->records.begin(), this->records.end(), sortByIDASC);
		break;
	case RecordSort::ID_DESC:
		std::sort(this->records.begin(), this->records.end(), sortByIDDESC);
		break;
	case RecordSort::ASC:
		std::sort(this->records.begin(), this->records.end(), sortByNameASC);
		break;
	case RecordSort::DESC:
		std::sort(this->records.begin(), this->records.end(), sortByNameDESC);
		break;
	case RecordSort::DATE_ASC:
		std::sort(this->records.begin(), this->records.end(), sortByDateASC);
		break;
	case RecordSort::DATE_DESC:
		std::sort(this->records.begin(), this->records.end(), sortByDateDESC);
		break;
	}
}


bool RecordCollection::sortByIDASC(StudentRecord &s1, StudentRecord &s2)
{
	return (s1.getIDNum() < s2.getIDNum());
}

bool RecordCollection::sortByIDDESC(StudentRecord &s1, StudentRecord &s2)
{
	return (s1.getIDNum() > s2.getIDNum());
}

bool RecordCollection::sortByNameASC(StudentRecord &s1, StudentRecord &s2)
{
	return (s1.getName() < s2.getName());
}

bool RecordCollection::sortByNameDESC(StudentRecord &s1, StudentRecord &s2)
{
	return (s1.getName() > s2.getName());
}

bool RecordCollection::sortByDateASC(StudentRecord &s1, StudentRecord &s2)
{
	return s1.getDate() < s2.getDate();
}

bool RecordCollection::sortByDateDESC(StudentRecord &s1, StudentRecord &s2)
{
	return s1.getDate() > s2.getDate();
}
