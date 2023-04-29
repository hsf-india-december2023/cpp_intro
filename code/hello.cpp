#include "hello.hpp"

#include <iostream>
#include <array>
#include <string>

void printHello(int i) {
  std::cout << "Hello, world " << i << '\n';
}

void checkIt() {
  std::array<std::string, 4> worldHellos{"Bonjour", "Ciao", "Guten Tag", "Hello"};
  int i;  
  for (auto const& hello : worldHellos) {
    std::cout << hello << "\n";
  }
}
