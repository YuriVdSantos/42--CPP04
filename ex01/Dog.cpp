#include "Dog.hpp"

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

void Dog::addIdea(std::string idea)
{
	brain->addIdea(idea);
}

std::string Dog::getIdea(int index) const
{
	return (brain->getIdea(index));
}

Dog::Dog()
{
	std::cout << "Default Dog Constructor" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	setType(dog.getType());
	brain = new Brain(*dog.brain);
}

Dog& Dog::operator= (const Dog& dog)
{
	std::cout << "Dog Copy Assignment Operator" << std::endl;
	if (this == &dog)
		return (*this);
	setType(dog.getType());
	brain = new Brain(*dog.brain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete brain;
}