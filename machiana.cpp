#include "rsa.h"
#include <iostream>
#include <string>

void main()
{
  std::string cleartext = "I am Test text ";
  DWORD toll;
  rsa rsa;
  std::cout << rsa.enc();
}
