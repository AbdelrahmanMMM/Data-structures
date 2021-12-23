#include "parcing.h"

void addt(string xml, string path) {

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

vector<string> readt(string path) {

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

string xmltotxt(string path) {

	vector<string> file = readt(path);
	std::ofstream out(path.substr(0, path.size() - 4) + ".txt");
	string pathnew = path.substr(0, path.size() - 4) + ".txt";
	for (auto i = 0; i != file.size(); i++) {
		out << file[i] << endl;
	}
	out.close();
	if (remove(path.c_str()) != 0)                                                                 //Delete the Original uncompressed file
		perror("Error deleting the compressed file:\t");
	return pathnew;
}
