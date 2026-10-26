#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	//VECTOR TEST
	try {
		std::vector<int> v;
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);

		int target = 10;
		long index = easyfind(v,target);
		std::cout << "[Vector] The value " << target << " was found at index: " << index << std::endl;
	} catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	//CONST VECTOR TEST
	try {
        std::vector<int> temp_vec;
        temp_vec.push_back(5);
        temp_vec.push_back(10);
        temp_vec.push_back(15);
        temp_vec.push_back(20);

        const std::vector<int> const_v = temp_vec;
        int target = 10;
        long index = easyfind(const_v, target);
        std::cout << "[Const Vector] The value " << target << " was found at index: " << index << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
	//LIST TEST
	try
	{
		std::list<int> l;
		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		l.push_back(4);
		int target = 3;
		long index = easyfind(l,target);
		std::cout << "[List] The value " << target << " was found at index: " << index << std::endl; 
	} catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	//CONST LIST TEST 
	try
	{
		std::list<int> tmp_l;
		tmp_l.push_back(100);
		tmp_l.push_back(200);
		tmp_l.push_back(300);
		tmp_l.push_back(400);
		const std::list<int> const_l = tmp_l;
		int target = 400;
		long index = easyfind(const_l,target);
		std::cout << "[Const List] The value " << target << " was found at index: " << index << std::endl;
	} catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::vector<int> not_found;
		not_found.push_back(1);
		not_found.push_back(2);
		not_found.push_back(3);
		int target = 400;
		long index = easyfind(not_found,target);
		std::cout << "[Not Found] The value " << target << " was found at index: " << index << std::endl;
	}catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return (0);
}