#include "Brain.hpp"

void Brain::deepCopy(const Brain& brain)
{
	for (int i = 0; i < numOfIdeas; i++)
	{
		ideas[i] = brain.ideas[i];
	}
}

std::string Brain::getIdea(int index) const
{
	return (ideas[index]);
}

void Brain::setIdeaIndex(int index)
{
	ideaIndex = index; 
}

int Brain::getIdeaIndex() const
{
	return (ideaIndex);
}

void Brain::addIdea(std::string idea)
{
	int index;

	index = getIdeaIndex() + 1;
	if (index < numOfIdeas)
	{
		setIdeaIndex(index);
		ideas[index] = idea;
	}
}

Brain::Brain()
{
	std::cout << "Default Brain Constructor" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	deepCopy(brain);
}

Brain& Brain::operator= (const Brain& brain)
{
	std::cout << "Brain Copy Assignment Operator" << std::endl;
	if (this == &brain)
		return (*this);
	deepCopy(brain);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Default Brain Destructor" << std::endl;
}

