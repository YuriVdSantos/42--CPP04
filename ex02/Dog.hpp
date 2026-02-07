#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain*	brain;
public:
	virtual void makeSound() const;
	void addIdea(std::string);
	std::string getIdea(int) const;
	Dog();
	Dog(const Dog&);
	Dog& operator= (const Dog&);
	virtual ~Dog();
};


#endif

