#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
# include <algorithm>
# include <exception>
class Span 
{
    private:
        unsigned int _n;
        std::vector<int> _v;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &copy);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int number);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        void addNumber(std::vector<int>::iterator begin,std::vector<int> end);

        template <typename InputIterator>
        void addRange(InputIterator begin, InputIterator end)
        {
            if (_v.size() + std::distance(begin, end) > _n)
                throw FullVectorException();
            _v.insert(_v.end(), begin, end);
        }
        
        class FullVectorException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class NotEnoughNumbersException : public std::exception
        {
            public:
                virtual const char* what () const throw();
        };
};

#endif