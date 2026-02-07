#include "Animal.hpp"

void Animal::makeSound(void) const
{
	std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::setType(std::string value)
{
	type = value;
}

Animal::Animal()
{
	std::cout << "Default Animal Constructor" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	setType(animal.getType());
}

Animal& Animal::operator= (const Animal& animal)
{
	std::cout << "Animal Copy Assignment Operator" << std::endl;
	if (this == &animal)
		return (*this);
	setType(animal.getType());
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}
