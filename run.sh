rm -rf main
g++ -o main *.cpp *.h

rm -rf result.txt
cat inputs/testEncodeCaesar.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultEncodeCaesar.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Encode Caesar - FAIL"
  else
    echo "Encode Caesar - PASS"
  fi 
else
  echo "Encode Caesar - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat inputs/testDecodeCaesar.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultDecodeCaesar.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Decode Caesar - FAIL"
  else
    echo "Decode Caesar - PASS"
  fi 
else
  echo "Decode Caesar - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat inputs/testEncodeVigenere.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultEncodeVigenere.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Encode Vigenere - FAIL"
  else
    echo "Encode Vigenere - PASS"
  fi 
else
  echo "Encode Vigenere - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat inputs/testDecodeVigenere.txt | ./main
  
if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultDecodeVigenere.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Decode Vigenere - FAIL"
  else
    echo "Decode Vigenere - PASS"
  fi 
else
  echo "Decode Vigenere - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat inputs/testEncodeRailFence.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultEncodeRailFence.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Encode RailFence - FAIL"
  else
    echo "Encode RailFence - PASS"
  fi 
else
  echo "Encode RailFence - FAIL (MISSING FILE)"
fi

rm -rf result.txt
cat inputs/testDecodeRailFence.txt | ./main
  
if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultDecodeRailFence.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Decode RailFence - FAIL"
  else
    echo "Decode RailFence - PASS"
  fi 
else
  echo "Decode RailFencee - FAIL (MISSING FILE)"
fi

