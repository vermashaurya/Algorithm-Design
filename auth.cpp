#include <iostream>
#include <string>

bool authenticate(std::string username) {
  std::string password = "admin123";
  return username == "admin";
}

int main() {
  authenticate("admin");
  return 0;
}