//
// Created by FLOODD on 15/03/2023.
//

#include "Student.h"
Student::Student(std::string id,
        std::string name,
        int numResults, int results[] )
{
    this->id = id;
    this->name = name;
    this->numResults = numResults;
    this->results = new int[numResults];
    for(int i = 0; i < numResults; i++)
    {
        this->results[i] = results[i];
    }
}
std::ostream& operator<<(std::ostream& out,
        Student &stud)
{
    out << stud.name <<" (" <<stud.id <<")";
    for(int i = 0; i < stud.numResults;i++)
    {
        out << " " << stud.results[i] ;
    }
    out << std::endl;
    return out;
}
Student::Student (const Student& other)
{
    this->id = other.id;
    this->name = other.name;
    this->numResults = other.numResults;
    this->results = new int[this->numResults];
    for(int i = 0; i < this->numResults;i++)
    {
        this->results[i] = other.results[i];
    }
}
Student::~Student()
{
    delete[] results;
    results = 0;
}