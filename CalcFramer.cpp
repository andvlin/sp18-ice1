#include <assert.h>
#include "CalcFramer.hpp"

using namespace std;

void CalcFramer::append(string chars)
{
	// PUT YOUR CODE HERE
	buffer.append(chars);
}

bool CalcFramer::hasMessage() const
{
	// PUT YOUR CODE HERE
	for (int i = 0; i < buffer.size(); i++) {
		if (buffer[i] == '\n')
			return true;
	}
	return false;
}

string CalcFramer::topMessage() const
{
	std::string temp;
	for (int i = 0; i < buffer.size(); i++) {
		if (buffer[i] == '\n')
			return temp;
		cout << typeid((buffer[i])).name();
		//temp.append(buffer[i]);
	}
	// PUT YOUR CODE HERE
	return temp;
}

void CalcFramer::popMessage()
{
	for (int i = 0; i < buffer.size(); i++) {
		if (buffer[i] == '\n') {
			buffer.erase(0);
		}
		buffer.erase(0);
	}
	// PUT YOUR CODE HERE

}

void CalcFramer::printToStream(ostream& stream) const
{
	// (OPTIONAL) PUT YOUR CODE HERE--useful for debugging
}
