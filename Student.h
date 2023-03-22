//
// Created by FLOODD on 15/03/2023.
//

#ifndef BIG_3EXAMPLE_STUDENT_H
#define BIG_3EXAMPLE_STUDENT_H
#include <iostream>

class Student {
    std::string id;
    std::string name;
    int numResults;
    int *results;
public:
    Student(std::string id, std::string name,
            int numResults, int results[] );
    friend std::ostream& operator<<(std::ostream&
    out, Student &stud);
    Student (const Student& other);
    ~Student();

};


#endif //BIG_3EXAMPLE_STUDENT_H
