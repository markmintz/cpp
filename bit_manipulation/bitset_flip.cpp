#include <iostream>
#include <bitset>

int main () {
 std::bitset<4> firstBin = 0b1;
 std::bitset<8> secondBin = 0b1100;

 std::cout << "First Number before flip: " << firstBin << " which equals " << firstBin.to_ulong() << "\n";
 std::cout<< "Second number before flip: " << secondBin << " which equals " << secondBin.to_ulong() << "\n";

 firstBin = ~firstBin;
 secondBin = ~secondBin;

 std::cout << "First Number after flip: " << firstBin << " which equals " << firstBin.to_ulong() << "\n";
 std::cout<< "Second number after flip: " << secondBin << " which equals " << secondBin.to_ulong();

}