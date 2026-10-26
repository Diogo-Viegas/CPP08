#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main() {
    std::cout << "=== Basic Test MutantStack ===" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "(top): " << mstack.top() << std::endl;

    mstack.pop(); 

    std::cout << "size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(1000);

    std::cout << "\n=== Mutant Stack Elements ===" << std::endl;
    MutantStack<int>::iterator it_begin = mstack.begin();
    MutantStack<int>::iterator it_end = mstack.end();

    while (it_begin != it_end) {
        std::cout << *it_begin << std::endl;
        ++it_begin;
    }

    std::cout << "\n=== Test copy std::stack ===" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "Top copy stack: " << s.top() << std::endl;

    return 0;
}