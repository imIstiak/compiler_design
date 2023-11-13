#include <iostream>
#include<fstream>

using namespace std;

bool isOperator (char a){
           return (a == '+' || a == '-' || a == '*' || a =='/'|| a == '=');
}
bool isPunctuation(char a) {
    return ( a==';' || a==',');}

bool isConstant(char c) {
  return (isdigit(c) || c == '.' || c == '-' /*|| c == '+' || c == '='*/);
}

void listPunctuation(string myText) {
    cout <<" Punctuation Expression: ";
    for (int i = 0; i < myText.length(); i++) {
        if (isPunctuation(myText[i])) {
            cout << myText[i] << " ";
        }
    }
    cout << endl;
}



void listOperators (string myText)
{
    cout<<" Arithmetic Expression: ";

    for (int i=0; i<myText.length();i++)
    {
        if (isOperator(myText[i])) {
            cout<< myText [i]<<" ";
        }

        }


    cout<<endl;
}

void listConstant (string myText)
{
    cout<<" Constants: ";
    for (int i = 0; i < myText.length(); i++) {
      if (isConstant(myText[i])) {
        cout << myText[i] << " ";
      }
    }

cout<<endl;

}

int main()
{

  string myText;


  // Read from the text file
  ifstream MyReadFile;
  MyReadFile.open("isti.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    // Output the text from the file
    listOperators (myText);
    listPunctuation(myText);
    listConstant(myText);

    //cout << myText;
  }

  // Close the file
  MyReadFile.close();
}
