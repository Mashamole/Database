#include <iostream>
#include <string>
#include<vector>
#include<fstream>


using std::cin;
using std::cout; 
using std::endl; 


//Attempting to make a data file for storing data of objects that contain info of a system 
//will use nodes and inheritance for making an output to a file







int main(){
 /*
string input;
int point;

		cout << "enter name and ID: " <<endl;
			cin >> input;
			cin >> point;
cout << input << " " << point << endl;
			//move(*point, input); 
*/

std::ofstream file; 
file.open("datafile.txt");
std::string s; 
int i = 0; 

	if(!file.is_open()){
		cout << "Error opening file" << endl; 
	}
	while(i<5){
		cin >> s; 
		file << s;
		++i;
	}














}