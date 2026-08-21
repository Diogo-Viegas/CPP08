#include "../inc/Span.hpp"

Span::Span(): _n(0)
{
}
Span::Span(unsigned int n) : _n(n)
{
    _v.reserve(n);
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
        if(tmp[i] - tmp [i - i] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return (min);
}
unsigned int Span::longestSpan() const
{
    if(_v.size() <= 1)
        throw NotEnoughNumbersException();
    std::vector <int> tmp = _v;
    std::sort(tmp.begin(),tmp.end());
    return (tmp[tmp.size() - 1] - tmp[0]);
}

const char *Span::FullVectorException::what() const throw()
{
    return ("Vector is Full");
}
const char *Span::NotEnoughNumbersException::what() const throw()
{
    return ("The vector needs at least 2 numbers");
}