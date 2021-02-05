#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>

class Class
{
private:
	std::string str;

public:
	Class(std::string str);

	std::string Str();

	void SetStr(std::string str);
};

#endif //CLASS_H