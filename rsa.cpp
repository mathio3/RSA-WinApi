#include "rsa.h"
 

void rsa::SetPrivk(const char* pv)
{
	rsa::Pem_Priv_Key = pv;
}

void rsa::SetPubk(const char* pk)
{
	rsa::Pem_Public_Key = pk;
}

BYTE * rsa::enc() {}

BYTE * rsa::dec() {}

rsa::clear() {};

