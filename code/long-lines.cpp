#include <array>
#include <iostream>
#include <string>

int main() {
  std::array<std::string, 10> my_strings = {
      "A first string",  "a second string",        "a third string",          "and so on",
      "and so forth",    "a testing string",       "a nother testing string", "my eighth string so far",
      "nine, one to go", "at last the last string"};

  for (const auto &str : my_strings) {
    std::cout << str << std::endl;
  }

  return 0;
}
