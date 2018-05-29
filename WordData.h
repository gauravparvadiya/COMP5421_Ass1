#ifndef WORDDATA_H
#define WORDDATA_H
#include "NumList.h"

class WordData {

private:
	char * worddata;   // A pointer to a dynamically allocated array to store a specified word
	int wordLength;   // length of the dynamically array
	int frequency; // frequency count of the word
	NumList nl; // NumList object storing a list of line numbers associated with the word

public:
	WordData();
	WordData(char* word, int length, int lineNum);
	WordData(WordData & wd);
	WordData &operator=(WordData &wd);
	~WordData();
	void appendLineNum(int lineNumber); //Append the element to the end of the list
	int getFrequency() const;           //Get frequency count
	int getLength() const;				//Get the length of the memory
	const char * getWord() const;		// Get a read-only pointer to the stored word
	const NumList& getList() const;		// Get a read-only reference to the NumList object
	int compareWords(char * words) const; // Determine the relationship with the given word and stored word
	void print(std::ostream& os) const;					//print the word together with its frequency count and list of line number

};

#endif