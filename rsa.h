#pragma once
#include <wincrypt.h>
#pragma comment(lib ,"wincrypt.lib")

class rsa
{
private:
	/* 
	* Generate Pair key and export publoc key using openssl 
	* # openssl genrsa -out private.key 1024 
	* # openssl rsa -in private.key -outform PEM -pubout -out public.pem
	*/
	const char* Pem_Priv_Key =
		"-----BEGIN RSA PRIVATE KEY-----MIICXAIBAAKBgQC3/oz+Ur6or9ygRsCa22RIZmiiTl/pGQOFDSkJzcQQVwN3ifvIvFyDVVlX6brf9yDy7/Tjfd8JvJ8W6OTq/By4en/F/BmTxddx+Z8pvzuOS7tqY55nhcY1J40in/oqaVKukdq+bH6NBdnjjuMpvmiRootYCM0muvERLw2tjawO8wIDAQABAoGAd1rP+XaRqXmTRAFBlfL1paWRAKCYxOvuBZRY57wsEHFxlUzUIQ5XcPafo1DCYeC85frUv/H6CiXqiYEAZpKuyb2zXMeBWMR7WO189xYVc3xPwaxyT80SnMV2dmJE/j15Mz/KtQRE9IYaZ2jZD599rna0UkZnPj6Cs3Ov+bYFRUECQQDxl+Te9tFOsuVOUI7ZwTpHvN0PaGewKqIkfceVw7O3VbXZy0a19k6g9Ag3/VCJhpKO10NWmwuwOY+S9K6dZ1uhAkEAwvddPuSBevpXTMkHTfaCkI6ghl2byCDxi8TZp0xZc34Q8DHh+lYpn/7CaHv/FGTanQLhei3KSuJeb0sws6kCEwJBAO4/AXgTZMO8Tb+WV9lL4WJfUIziQ+aJlI5x74G0laUFhCj8eoX1GQNGxFgamfKVYDA2/nQIwFUP3pNock5NYCECQDznu3hfN9esBsOU9TQ0strnw1vWOEkPiYWJLBkoL7V1h2MRoi9q5Tv3ANJVEf1T+DseYEOjtFMqXifUTFWDkYMCQHwn3NI3tD2i9rB9OIoHW7+1kNElDo/poDDB9AfuX7rVxSbf70zyU6bgqB6EJ7klf/Qmq1RDV8UZVIrcnYeIqfE=-----END RSA PRIVATE KEY-----";

	const char* Pem_Public_Key =

		"-----BEGIN PUBLIC KEY-----MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC3/oz+Ur6or9ygRsCa22RIZmiiTl/pGQOFDSkJzcQQVwN3ifvIvFyDVVlX6brf9yDy7/Tjfd8JvJ8W6OTq/By4en/F/BmTxddx+Z8pvzuOS7tqY55nhcY1J40in/oqaVKukdq+---- - END PUBLIC KEY----";
public:
	void SetPrivk();
	void SetPubk();
	BYTE* enc();
	BYTE* dec();
	rsa::clear();
};

