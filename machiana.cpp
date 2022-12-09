#include "rsa.h"
#include <iostream>
#include <string>

void main()
{
  std::string cleartext = "I am Test text ";
  DWORD toll;
  rsa rsa;
  BYTE* encdata = rsa.enc( );
  std::cout << "Enc : " << encdata << std::endl; 
  
  std::cout << "Dec : " << rsa.enc(encdata) std::endl; 
}
