#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	brain;
public:
	virtual void makeSound() const;
	void addIdea(std::string);
	std::string getIdea(int) const;
	Cat();
	Cat(const Cat&);
	Cat& operator= (const Cat&);
	virtual ~Cat();
};



#endif
