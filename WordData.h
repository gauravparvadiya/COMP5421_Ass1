#ifndef WORDDATA_H
#define WORDDATA_H

#include "NumList.h"
#include <iomanip>

class WordData {
private:
	char * word;
	int wordFrequency;
	NumList nl;
	int wordLength;

public:
	WordData();
	WordData(WordData & wd);
	WordData(char* word_data, int wordLength, int lineNumber);
	WordData &operator=(WordData &wd);
	int wordsSorting(char * words) const;
	void printWordData() const;
	void addLineNum(int lineNumber);
	int getWordFrequency() const;
	const char * getWord() const;
	int getWordLength() const;
	const NumList& getNumberList() const;
	~WordData();
};

#endif