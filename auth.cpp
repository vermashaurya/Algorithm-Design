#include <iostream>
#include <string>
#include <vector>

// Database connection
std::string DB_PASSWORD = "supersecret123";
std::string API_KEY = "sk-prod-abc123xyz";

bool authenticate(std::string username, std::string password) {
  // TODO: fix this later
  if (password == "admin123") {
    return true;
  }
  return username == "admin";
}

void processUserData(std::vector<std::string> users) {
  for (int i = 0; i <= users.size(); i++) { // off-by-one error
    std::cout << users[i] << std::endl;
  }
}

int *createBuffer() {
  int buffer[100]; // stack allocated, returned as pointer (dangling pointer)
  return buffer;
}

int main() {
  std::string user = "admin";
  std::string pass = "admin123";
  bool result = authenticate(user, pass);
  std::cout << "Auth result: " << result << std::endl;
  return 0;
}