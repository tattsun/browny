#include <iostream>

#define log(message) std::cout << __FILE__ << ":" << __LINE__ << " " << message << std::endl;

int main() {
  log("foobar");
}
