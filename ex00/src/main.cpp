#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::cout << "-> Test vector container" << std::endl;
	std::vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	try
	{
		std::cout << *easyfind(v, 5) << std::endl;
		std::cout << *easyfind(v, 20) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
 //==============================================
 std::cout << "-> Test const vector container" << std::endl;
	const std::vector<int> const_v = v;

	try
	{
		std::cout << *easyfind(const_v, 5) << std::endl;
		std::cout << *easyfind(const_v, 20) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
 //==============================================
	std::cout << "-> Test list container\n";
	std::list<int> l;

	for (int i = 0; i < 20; i++)
	{
		l.push_back(i);
	}
	try
	{
		std::cout << *easyfind(l, 0) << std::endl;
		std::cout << *easyfind(l, 1000) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
 //==============================================
 	std::cout << "-> Test const list container\n";
	const std::list<int> const_l = l;
	try
	{
		std::cout << *easyfind(const_l, 0) << std::endl;
		std::cout << *easyfind(const_l, 1000) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
 //==============================================
	std::cout << "-> Test deque container\n";
	std::deque<int> d;

	for (int i = 0; i < 350; i++)
	{
		d.push_back(i);
	}

	try
	{
		std::cout << *easyfind(d, 349) << std::endl;
		std::cout << *easyfind(d, 560) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
 //==============================================
 	std::cout << " -> Test const deque container\n";
	const std::deque<int> const_d = d;
	try
	{
		std::cout << *easyfind(const_d, 349) << std::endl;
		std::cout << *easyfind(cost_d, 560) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}