//HELLO WORLD - 17/10/2018


//Every time you use an opening curley brace ({), press tab to indent. It helps organise it.
//Don't forget to add ; to the end of every line!!!

#include <iostream>  //preprocessor directive - provides functionality for input/output for the console
#include <string> //gives access to string functionality
using namespace std; //declare use of standard namespace

int main() {   //Main Function
	cout << "Hello World!" << endl;   //cout = console out     ,, =  #Insertion Marker - It tells the program that what follows should be inserted into console output
	cout << "Watashi ga kita!" << endl; //endl = end line

	//VARIABLES
	//Below are some variables which can be used. The type of variable is designated using int, double, char and bool. Variables are case sensitive.

	int wholeNum = 6; //declare integer variable - can store whole numbers
	double deciNum = 5.345 //declare double variable - can store decimal placed numbers
	char singleCharacter = 'h'; //declare char variable - can store single character cariables
	bool isAlive = true;  //declare boolean variable - can store true or false values
	float data = 5.6f;   //A float is like a double but only stores up to 7 decimal places. The f is to designate it as a float for the compiler.
	string sentence = "Hey listen to me"; //Store a string variable, can store words, sentences and strings of words. ("sentence" is the variable name") Strings are differentiated by having " rather than ' 
	
	//Using commas can increase efficiency
	int num1 = 1, num2 = 2, num3 = 3;

	


	system("pause"); //keeps console window open while testing program (specific to visual studio)
	return 0;   //closes console
}