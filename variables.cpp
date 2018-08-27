/* 
This is the first code I like my students to write. It is an extended Hello World snippet!
Usually this code is edited and extended during a lesson and many parts are commented out. 
*/


// Hello student ! this is an inline comment. 


/* 
And this other is a multi line comment ! 
Comments are ignored by the compiler, but are essential to make the code more clear.
Try to comment every single line of this exercise !
Comments will help you revise your code and serve as future reference during your learning process.
*/


// The first line of our code is used to import the library iostream into our program.
// the iostream library contains all the necessary methods we will need to display a message to an output device or to acquire an input from the keyboard.
#include <iostream>

using namespace std;


// Main is the principal function of our code, we will write more and with different names, but main is quite unique since it is required by C++, it will be the first executed function of all our program. 
int main(){
  // cout: outputs to screen "Hello Word". endl: endline. the ";" is required at the end of every command by c++.
  cout << "Hello World" << endl;
  // Let's check some variables ! Variables are used to define in a human way a position in the memory that will be occupied by a value to store, in case of variables this value can change.
  
  // char: characters 
  char myGrade = 'A'; 
  // bool: a boolean value (True or False)
  bool isHappy = true;
  // int: integer number 
  int myLame = 40;
  // float: a real number es. 4.5 
  float favNum = 344;
  
  double othfavNum = 559;
  
  // constant are position in the memory that cannot be changed during the execution of a program.
  const double PI = 3.1415926535;
  
  cout << myLame << endl;
  cout << myGrade << endl;
  cout << isHappy << endl;
  cout << favNum << endl;

  return 0;

}
