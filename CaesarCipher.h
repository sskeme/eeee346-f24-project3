#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H

#include "Cipher.h"

/*
 * derived concrete class of the abstract base class Cipher
 */
class CaesarCipher : public Cipher {
private:
  /*  
   * shift value for a Caesar cipher
   */
  int shift;

public:
  /*  
   * constructor: initializes shift to the parameter and cipherName to "Caesar"
   * @param s - used to set shift
   */
  CaesarCipher(int s); 

  /*
   * encode(): performs Caesar encoding of a message
   * @param msg - string message to encode
   * @return true if encoding is successful else false
   */
  bool encode(string msg);

  /*
   * decode(): performs Caesar decoding of message
   * @param msg - string message to decode
   * @return true if decoding is successful else false
   */
  bool decode(string msg);
};
#endif
