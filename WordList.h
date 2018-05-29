#ifndef WORDLIST_H
#define WORDLIST_H

#include "WordData.h"

class WordNode {
private:
	WordData wd;
	WordNode *next;

public:
	WordNode();
	WordNode(char *word, int length, int lineNumber);
	void setNext(WordNode * next);
	WordData & getData();
	WordNode * getNext();
	~WordNode();
};

class WordList {

private:
	WordNode * head;
	WordNode * last;
	int linedListSize;
	void processFile(char* fname);
	WordNode * getPointer(char* words);
	void wordsOperation(char * words, int length, int linenNum);

public:

	WordList(char * fname);
	~WordList();
	void printFormat() const;
	int getSize() const;
	string processData(string word);
};

#endif