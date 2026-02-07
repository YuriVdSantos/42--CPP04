#include "Brain.hpp"

Brain::Brain() : ideaIndex(-1)
{
    std::cout << "Construtor Brain padrão chamado" << std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "Construtor de Cópia Brain chamado" << std::endl;
    *this = src;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Operador de Atribuição Brain chamado" << std::endl;
    if (this != &src)
    {
        this->ideaIndex = src.ideaIndex;
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destrutor Brain chamado" << std::endl;
}

void Brain::addIdea(std::string idea)
{
    if (ideaIndex < 99)
    {
        ideas[++ideaIndex] = idea;
    }
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}

int Brain::getIdeaIndex() const
{
    return ideaIndex;
}

void Brain::setIdeaIndex(int index)
{
    this->ideaIndex = index;
}