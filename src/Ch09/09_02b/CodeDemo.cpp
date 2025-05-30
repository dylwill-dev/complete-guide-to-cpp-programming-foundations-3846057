// Complete Guide to C++ Programming Foundations
// Exercise 09_02
// Opening a Text File for Reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream> // Provide this header to handle files

int main(){
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    inFile.open("players.txt"); // use the open function to open the file with the name given as a string
    if (inFile.fail()) //  If the open function failed then say the file was not found
        std::cout << std::endl << "File not found!" << std::endl;
    else{ // If the open function successfully opened the file then begin to parse the file
        while (!inFile.eof()){
            getline(inFile, str);
            std::cout << str << ", "; // Get the name

            getline(inFile, str);
            number = stoi(str); // Returns the integer represented by the string
            std::cout << number << ", ";

            getline(inFile, str);
            letter = str[0]; // Get the character using indexing of the string
            std::cout << letter << std::endl;
            
        }
        inFile.close(); // Make sure to close the file
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
