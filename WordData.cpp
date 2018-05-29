#include "WordData.h"

/* Default CtoR */
WordData::WordData()
{
	word = NULL;
}

/*Parameterized CtoR*/
WordData::WordData(char* word_data, int length, int lineNum)
{

	word = new char[length];
	strcpy(word, word_data);
	this->wordLength = length;
	wordFrequency = 1;

	nl = NumList(lineNum);


}

/*Copy CtoR*/
WordData::WordData(WordData & wd)
{
	word = NULL;
	*this = wd;

}

/* Operator = Overloading */
WordData &WordData::operator=(WordData &wd)
{
	delete[]word;
	wordLength = wd.getWordLength();

	word = new char[wordLength];
	strcpy(word, wd.getWord());
	wordFrequency = wd.getWordFrequency();
	nl = wd.getNumberList();

	return *this;
}

/* Add line number to associated NumList object */
void WordData::addLineNum(int lineNumber)
{
	wordFrequency++;
	nl.append(lineNumber);
}

/* Get Frequency of word */
int WordData::getWordFrequency() const
{
	return wordFrequency;
}

/* Get Word Length */
int WordData::getWordLength() const
{
	return wordLength;
}

/* Get Word char pointer */
const char * WordData::getWord() const
{
	return word;
}

/* Words sorting to identy new word's position */
int WordData::wordsSorting(char * words) const
{
	char *currentWord = word, *newWord = words;
	while (*currentWord && *newWord)
	{
		char cur = *currentWord, neww = *newWord;
		if (cur == neww) {
			++currentWord;
			++newWord;
		}
		else {
			if (cur > neww) {
				return 1;
			}
			else {
				return 2;
			}
		}
	}
	if (*currentWord == *newWord) {
		return 0;
	}
	else if (*currentWord) {
		return 1;
	}
	else {
		return 2;
	}
}

/* Get int pointer from NumList object */
const NumList& WordData::getNumberList() const
{
	return nl;
}

/* Print Line numbers of word */
void WordData::printWordData() const
{
	ofstream fout;
	fout.open("output.txt", ofstream::app);
	fout << setw(15) << right << word << setw(3) << "(" << setw(1) << wordFrequency << ")";
	for (int i = 0; i< nl.getListSize(); i++)
	{
		fout << setw(3) << nl.getData(i);
	}
	fout << endl;
}

/* Destructor */
WordData::~WordData()
{
	delete[] word;
}