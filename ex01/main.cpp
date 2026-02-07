#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main ()
{
	const Animal* animals[10];

	for (int i = 0; i < 10; i++)
	{
		(i % 2) ? animals[i] = new Dog : animals[i] = new Cat;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}

	std::cout << std::endl;
	Dog* dog = new Dog;
	dog->addIdea("Supah nice idea");
	std::cout << "This idea from dog: " << dog->getIdea(0) << std::endl;

	std::cout << std::endl;
	Dog* copyDoge = new Dog(*dog);
	delete dog;
	std::cout << "This idea from copyDoge: "	<< copyDoge->getIdea(0) << std::endl;

	std::cout << std::endl;
	Cat* cat = new Cat;
	cat->addIdea("Supah nice idea");
	std::cout << "This idea from cat: " << cat->getIdea(0) << std::endl;

	std::cout << std::endl;
	Cat* copyCat = new Cat(*cat);
	delete cat;
	std::cout << "This idea from copyCat: "	<< copyCat->getIdea(0) << std::endl;

	std::cout << std::endl;
	delete copyCat;
	return (0);
}
