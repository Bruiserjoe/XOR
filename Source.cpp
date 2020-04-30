#include "Header.h"
std::ifstream file;
std::string line;
char gey[4] = { 'F', 'U', 'C', 'K'};
std::vector<std::string> text;
//Use XOR algorithm
std::string XOR(std::string data, char key[]) {
	line = data;
	for (int i = 0; i < line.size(); i++) {
		line[i] = data[i] ^ key[i % (sizeof(key) / sizeof(char))];
	}
	return line;
}
//Reads the file
void read() {
	file.open("input.txt");
	while (std::getline(file, line)) {
		text.push_back(line);
	}
	file.close();
	for (int j = 0; j < text.size(); j++) {
		std::cout << XOR(text[j], gey);
	}
	//Use this to mark end of text
	std::cout << ":";
	std::cout << std::endl;
}
int main() {
	read();
	
	system("pause");
	return 0;
}