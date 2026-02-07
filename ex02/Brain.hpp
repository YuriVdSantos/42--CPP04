#ifndef BRAIN_CPP
# define BRAIN_CPP

#include <iostream>

constexpr int numOfIdeas = 100;

class Brain
{
private:
	std::string ideas[numOfIdeas];
	int ideaIndex = -1;
public:
	void deepCopy(const Brain&);
	std::string getIdea(int) const;
	int getIdeaIndex() const;
	void setIdeaIndex(int);
	void addIdea(std::string);
	Brain();
	Brain(const Brain&);
	Brain& operator= (const Brain&);
	~Brain();
};

#endif
