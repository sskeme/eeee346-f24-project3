#include <iostream>

#include "tests.h"
#include "CaesarCipher.h"
#include "VigenereCipher.h"
#include "RailFenceCipher.h"

ofstream myFile;

int main() {
  myFile.open("result.txt");

  // storage for values from cin
  string cipherName;
  string msg;
  string action;

  // result variable
  bool actionStatus;

  // declare a Cipher-typed shared pointer named cipher, which will point to an object of CaesarCipher, VigenereCipher, or RailFenceCipher
  /*TODO: write your code*/

  // request name for the cipher to use
  cin >> cipherName;

  if (cipherName == "Caesar") {
    // for a Caesar cipher, a shift value is needed
    int shift;

    // get a shift value
    cin >> shift;

    // generate an object from CaesarCipher and have the object pointer point to this object
    // shift is used in the constructor
    /*TODO: write your code*/
  } else if (cipherName == "Vigenere") {
    // for a Vigenere cipher, a key value is needed
    string key;

    // get a key value
    cin >> key;

    // generate an object from VigenereCipher and have the object pointer point to this object
    // key is used in the constructor
    /*TODO: write your code*/
  } else if (cipherName == "RailFence") {
    // for a Rail Fence cipher, a rail value is needed
    int rail;

    // get a rail value
    cin >> rail;

    // generate an object from RailFenceCipher and have the object pointer point to this object
    // rail is used in its constructor
    /*TODO: write your code*/
  } else {
    cout << "Bad cipher name ( " << cipherName << " )" << endl;
    return -1;
  }

  // request action (ENCODE or DECODE)
  cin >> action;

  // check the action entered
  if( (action != "ENCODE") && (action != "DECODE") ) {
    cout << "Bad cipher action ( " << action << " )" << endl;
    return -1;
  }

  // request for message
  getline(cin >> ws, msg); // >> ws: to extract and discard any leading whitespace characters

  // based on the action, perform encoding or decoding
  if (action == "ENCODE") {
    actionStatus = testEncode(cipher, msg);
  } else if (action == "DECODE") {
    actionStatus = testDecode(cipher, msg);
  } else {
    cout << "Bad cipher action ( " << action << " )" << endl;
    return -1;
  }

  return 0;
}
