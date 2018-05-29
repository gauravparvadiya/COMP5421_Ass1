#ifndef NumList_H
#define NumList_H

#include <iostream>
#include <fstream>

using namespace std;

class NumList {
private:
	int *numListArray;
	int listSize;
	int listCapacity;
	void resize();

public:
	NumList();
	NumList(int lineNumber);
	NumList(const NumList &nl);
	NumList &operator=(const NumList &rhsNl);
	~NumList();
	bool isEmpty() const;
	bool isExist(int number) const;
	void append(int number);
	void setElement(int position, int number);
	int getData(int position) const;
	bool isFull() const;
	int getListSize() const;
	int getListCapacity() const;
	const int * getPointer() const;
};

#endif