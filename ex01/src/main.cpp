#include "Span.hpp"
#include <iostream>

int main()
{
	std::cout << "\033[33m" << "Test vector container\n"<< "\033[0m";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "\033[33m" << "Test vector range\n"<< "\033[0m";
	Span sp2 = Span(10000);
	std::vector<int> v;
	for (int i = 0; i < 10000; i++)
	{
		
		v.push_back(i);
	}
	try
	{
		sp2.addRange(v.begin(), v.end());
		std::cout << "shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "\033[33m" << "Test vector large range\n"<< "\033[0m";
	Span sp3 = Span(100000);
	std::vector<int> v2;
	std::srand(time(NULL));
	for (int i = 0; i < 100000; i++)
	{		
		v2.push_back(i);
	}
	try
	{
		sp3.addRange(v2.begin(), v2.end());
		std::cout << "shortest span: " << sp3.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
