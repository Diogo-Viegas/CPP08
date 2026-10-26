#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include<algorithm>
# include<exception>


class NotFoundException : public std::exception
{
    public:
        virtual const char * what() const throw()
        {
            return ("Element not found");
        }
};
template <typename T>
long easyfind(T &container, int n)
{
    typename T::iterator iter;
    iter = std::find(container.begin(),container.end(),n);
    if(iter == container.end())
        throw NotFoundException();
    return std::distance(container.begin(),iter);
}
template <typename T>
long easyfind(const T& container, int n)
{
    typename T::const_iterator iter;
    iter = std::find(container.begin(),container.end(),n);
    if(iter == container.end())
        throw NotFoundException();
    return std::distance(container.begin(),iter);
}
#endif