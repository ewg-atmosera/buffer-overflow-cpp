#include <iostream>
#include <cstring>

int main() {
  char buffer[10];

  const char* source = "This string is too long for the buffer";

  strcpy(buffer, source);

  std::cout << "Buffer content: " << buffer << std::endl;

  return 0;
}