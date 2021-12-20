#include "formatting.h"




//write
void write(string xml, string path) {

	try {
		ofstream x; //file nsme

		x.open(path, ios::out | ios::app);//create file
		x << xml + "\n"; //write in the file
		x.close();

		cout << "line added to the file \n";
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}

}



//read
vector<string> read(string path) {

	vector<string> lines;
	string line;

	try {
		ifstream y(path); //read file

		if (y.is_open()) {

			while (getline(y, line)) {
				lines.push_back(line);
			}
			y.close();

		}
		else {
			cout << "The path is not correct";
		}

	}
	catch (exception& e) {
		cout << e.what() << endl;
	}


	return lines;

}


