// Ruben Flores
// rubenf64@csu.fullerton.edu
// @Ruppert23
// Partners: @pachmi, @SirBagelton

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int size = static_cast<int>(arguments.size()) - 1;
  if (size < 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum{0};
  bool first = true;
  for (std::string const& argument : arguments) {
    if (first) {
      first = false;
    } else {
      sum += stod(argument);
    }
  }

  double average = sum / (size);

  std::cout << "average = " << average << "\n";

  return 0;
}
