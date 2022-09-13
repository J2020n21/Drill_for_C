//file input and output: change "hate" to "love" only in console output
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string str;
	string replaced_txt;

	fstream readstream;
	readstream.open("example.txt");

	while (readstream >> str) {
		//cout << str; //output check

		if (str == "hate") { //print "love" rather "hate"
			cout << "love ";
		}

		else {
			cout << str << " ";

		}
	}

	readstream.close();

}
