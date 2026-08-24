#include "../inc/Span.hpp"
#include <iostream>
Span::Span(): _n(0)
{
}
Span::Span(unsigned int n) : _n(n)
{
    std::cout << "Vector created with size " << n << std::endl;
}
Span::Span(const Span &copy) : _n(copy._n), _v(copy._v)
{
}
Span &Span::operator=(const Span &other)
{
    if(this != &other)
    {
        _n = other._n;
        _v = other._v;
    }
    return (*this);
}
Span::~Span()
{
    
}
void Span::addNumber(int n)
{
    if( _v.size() >= _n)
        throw FullVectorException();
    _v.push_back(n);
    std::cout << "Number " << n << " added to the vector" << std::endl;
}

unsigned int Span::shortestSpan() const
{
    if(_v.size() <= 1)
        throw NotEnoughNumbersException();
    std::vector <int> tmp = _v;
    std::sort(tmp.begin(),tmp.end());
    int min = tmp[1] - tmp[0];
    for(unsigned int i = 1; i < tmp.size(); i++)
    {
        if(tmp[i] - tmp [i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return (min);
}
unsigned int Span::longestSpan() const
{
    if(_v.size() <= 1)
        throw NotEnoughNumbersException();
    int min_element = *std::min_element(_v.begin(),_v.end());
    int max_element = *std::max_element(_v.begin(),_v.end());
    return (max_element - min_element);
}

const char *Span::FullVectorException::what() const throw()
{
    return ("Vector is Full");
}
const char *Span::NotEnoughNumbersException::what() const throw()
{
    return ("The vector needs at least 2 numbers");
}