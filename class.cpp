#include "class.h"

Class::Class(std::string str)
{
	this->SetStr(str);
}

std::string Class::Str()
{
	return this->str;
}

void Class::SetStr(std::string str)
{
	this->str = str;
}