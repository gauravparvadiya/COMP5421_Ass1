#include "WordList.h"
#include <sstream>

using namespace std;

/* Default CtoR */
WordNode::WordNode()
{
	next = NULL;
}

/* Parameterized CtoR */
WordNode::WordNode(char *word, int length, int lineNumber)
{
	next = NULL;
	wd = WordData(word, length, lineNumber);

}

/* Set next value of current node */
void WordNode::setNext(WordNode * next)
{
	this->next = next;
}

/* Get WordData object */
WordData & WordNode::getData()
{
	return wd;
}
/* Get next node of current node */
WordNode * WordNode::getNext()
{
	return next;
}

/* Destructor */
WordNode::~WordNode()
{
	delete next;
}

/* Parameterized CtoR - WordList*/
WordList::WordList(char * file_name)
{
	linedListSize = 1;
	head = NULL;
	last = NULL;
	processFile(file_name);
}

/* Destructor */
WordList::~WordList() {
	delete head;
}

/* Extract words from file */
void WordList::processFile(char* file_name)
{
	char *temp;
	int length = 0;
	ifstream fin(file_name);
	if (!fin) {
		cout << "File can't be opened..!!!";
		exit(1);
	}

	ofstream fout;
	fout.open("output.txt", ofstream::trunc);
	fout << "WordList Source File: " << file_name <<endl;
	fout << "===================================="<<endl;
	int linenum = 0;
	string line;
	getline(fin, line);
	while (fin) {
		++linenum;
		istringstream sin(line);
		string word;
		while (sin >> word) {
			word = processData(word);
			if (!word.empty()) {
				length = word.length();
				temp = new char[length + 1];
				strcpy(temp, word.c_str());
				if (head == NULL)
				{
					head = new WordNode(temp, length + 1, linenum);
					last = head;
				}
				else {
					wordsOperation(temp, length + 1, linenum);
				}
			}
		}
		getline(fin, line);
	}
	fin.close();
}

/* Set the word in Linked List based on sorting */
void WordList::wordsOperation(char * words, int length, int lineNumber)
{
	WordNode *previous = NULL;
	WordNode *current = getPointer(words);
	if (current == NULL)
	{
		current = head;
		while (true) {
			if (current->getData().wordsSorting(words) == 2)
			{
				previous = current;
				current = current->getNext();
				if (current == NULL)
				{
					last = new WordNode(words, length, lineNumber);
					previous->setNext(last);
					break;
				}
			}
			else
			{
				if (current == head)
				{
					head = new WordNode(words, length, lineNumber);
					head->setNext(current);
					break;
				}
				else
				{
					WordNode *temp = new WordNode(words, length, lineNumber);
					temp->setNext(current);
					previous->setNext(temp);
					break;
				}
			}
		}
		linedListSize++;
	}
	else
	{
		current->getData().addLineNum(lineNumber);
	}

}

/* Print Data in Alphabetical order */
void  WordList::printFormat() const
{
	ofstream fout;
	fout.open("output.txt", ofstream::app);
	char alpha = 'A';
	WordNode *current = head;
	fout << left << setw(1) << "<" << alpha << ">" << endl;
	while (current != NULL)
	{
		if (tolower(alpha) == current->getData().getWord()[0])
		{
			current->getData().printWordData();
			current = current->getNext();
		}
		else
		{
			alpha++;
			fout << left << setw(1) << "<" << alpha << ">" << endl;
		}
	}
	for (int i = (int)alpha; i < 90; i++)
	{
		fout << left << setw(1) << "<" << ++alpha << ">" << endl;
	}
	cin.get();
}

/* Process word to remove unnecessory character */
string WordList::processData(string word) {
	char wordCopy[50], processedWord[50];
	processedWord[0] = '\0';
	strcpy(wordCopy, word.c_str());
	int j = 0;
	for (int i = 0; i < word.length(); i++) {
		if (!isdigit(wordCopy[i])) {
			if ((wordCopy[i] >= 'A' && wordCopy[i] <= 'Z') || (wordCopy[i] >= 'a' && wordCopy[i] <= 'z') || (wordCopy[i] == '.' && ((wordCopy[i + 1] >= 'A' && wordCopy[i + 1] <= 'Z') || (wordCopy[i + 1] >= 'a' && wordCopy[i + 1] <= 'z'))))
			{
				processedWord[j] = tolower(wordCopy[i]);
				j++;
			}
		}
	}
	if (processedWord[0] != '\0') {
		processedWord[j] = '\0';
		return string(processedWord);
	}
	else
		return {};
}

/* Get pointer of word */
WordNode * WordList::getPointer(char* words)
{
	WordNode *current = head;
	int i = 1;
	for (int i = 0; i<linedListSize; i++)
	{
		if (current->getData().wordsSorting(words) == 0)
			return current;
		current = current->getNext();
	}
	return NULL;
}

/* Get linked list size */
int  WordList::getSize() const
{
	return linedListSize;
}