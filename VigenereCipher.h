#ifndef VIGENERECYPHER_H
#define VIGENERECYPHER_H

#include "Cipher.h"

class VigenereCipher : public Cipher {
private:
  /*  
   * original key used in a Vigenere cipher
   */
  string key;
  
  /*  
   * converted key from the original key
   */
  string convKey;

public:
  /* 
   * constructor: initializes key using the parameter and cipherName to "Vigenere"
   * @param k - used to set key
   */
  VigenereCipher(string k); 

  /*  
   * convertKey: converts key to match the lenghth of msg
   * and the length of key
   * the result is stored in convKey
   */
  void convertKey(const string& msg, const string& key);
  
  /*  
   * encode(): performs Vigenere encoding of a message
   * @param msg - string message to encode
   * @return true if encoding is successful else false
   */
  bool encode(string msg);

  /*  
   * decode(): performs Vigenere decoding of message
   * @param msg - string message to decode
   * @return true if decoding is successful else false
   */
  bool decode(string msg);
};
#endif
