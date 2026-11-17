#include <iostream>
#include <string>

int main () {
  std::cout << "Hello, what is your name?" << std::endl;

  std::string yourName;
  std::cin >> yourName;

  std::cout << "Hi " << yourName << std::endl;

  // test if we are using a modern compiler
  int aNumber = 10;
  std::string aNumberAsText = std::to_string (aNumber);
  std::cout << aNumberAsText << std::endl;

}

