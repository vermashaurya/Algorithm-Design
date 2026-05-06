#include <iostream>
#include <string>

bool authenticate(std::string username) {
Use environment variables or a secure storage mechanism for sensitive data
  return username == "admin";
}

int main() {
  authenticate("admin");
  return 0;
}