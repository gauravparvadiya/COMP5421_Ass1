//
// Created by Gaurav Parvadiya on 2018-05-27.
//

#ifndef A1_CODE_NUMLIST_H
#define A1_CODE_NUMLIST_H

#include <iostream>

class NumList {
private:
    int * numListPtr;         //A pointer to a dynamically allocated array of integer elements
    int numListLength;        // The size of list
    int numListCapacity;      // Capacity of list

public:
    NumList();

    NumList(int line_number);

    const NumList & operator=(const NumList & rhs);

    ~Line();

    void setData(int data, int position);

    int getData(int position);

    int getCapacity();

    int getLenght();

    void append(const int & line_number);

    friend std::ostream & operator<<(std::ostream & out, const NumList & NumList);

    friend std::istream & operator>>(std::istream & in, NumList & NumList);
};

#endif //A1_CODE_NUMLIST_H
