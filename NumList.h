#ifndef NumList_H
#define NumList_H
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class NumList {

private:
	int * numListArray;
	int size;
	int capacity;
	void resize();

public:
	NumList();
	NumList(int wordLineNumber);
	NumList(const NumList & nl);
	NumList &operator=(const NumList &nl);
	~NumList();

	bool empty() const;
	bool isDataExist(int data) const;
	bool full() const;
	void append(int data);
	int  getData(int position) const;
	bool setData(int data, int position);
	int getSize() const;
	int getCapacity() const;
	const int * getPointer() const;

};

#endif