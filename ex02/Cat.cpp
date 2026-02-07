#include "Cat.hpp"

void Cat::makeSound() const
{
	std::cout << "Bark? .........,no jk, just meow" << std::endl;
}

void Cat::addIdea(std::string idea)
{
	brain->addIdea(idea);
}

std::string Cat::getIdea(int index) const
{
	return (brain->getIdea(index));
}
Cat::Cat()
{
	std::cout << "Default Cat Constructor" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	setType(cat.getType());
	brain = new Brain(*cat.brain);
}

Cat& Cat::operator= (const Cat& cat)
{
	std::cout << "Cat Copy Assignment Operator" << std::endl;
	if (this == &cat)
		return (*this);
	setType(cat.getType());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete brain;
}