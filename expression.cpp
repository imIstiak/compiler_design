#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isOperator (char a){
           return (a == '+' || a == '-' || a == '*' || a =='/' || a=='=');
           
}


void listOperators (string myText)
{
    cout<<" operators: ";

    for (int i=0; i<myText.length();i++)
    {
        if (isOperator(myText[i])) {
            cout<< myText [i]<<" ";
        }
    }
    cout<<endl;
}

int main () {

  string myText;

  // Read from the text file
  ifstream MyReadFile("isti.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
         listOperators (myText);
    // Output the text from the file
   /* cout << myText; */
  }

  // Close the file
  MyReadFile.close();
}
