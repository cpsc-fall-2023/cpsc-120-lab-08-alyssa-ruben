// Ruben Flores
// rubenf64@csu.fullerton.edu
// @Ruppert23
// Partners: @pachmi, @SirBagelton

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc != 4) {
    std::cout << "error: you must supply three arguments\n";
    return -1;
  }

  std::string protein;
  std::string bread;
  std::string condiment;
  protein = arguments.at(1);
  bread = arguments.at(2);
  condiment = arguments.at(3);
  std::cout << "Your order: A " << arguments.at(1) << " sandwich on ";
  std::cout << arguments.at(2) << " with " << arguments.at(3) << ".\n";

  return 0;
}
