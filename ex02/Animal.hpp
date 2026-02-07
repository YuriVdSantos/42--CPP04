#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	std::string getType() const;
	void setType(std::string);
	virtual void makeSound() const = 0;
	Animal();
	Animal(const Animal&);
	Animal& operator= (const Animal&);
	virtual ~Animal();
};



#endif