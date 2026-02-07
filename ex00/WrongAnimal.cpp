#include "WrongAnimal.hpp"

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void WrongAnimal::setType(std::string value)
{
	type = value;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	setType(animal.getType());
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& animal)
{
	std::cout << "WrongAnimal Copy Assignment Operator" << std::endl;
	if (this == &animal)
		return (*this);
	setType(animal.getType());
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}
