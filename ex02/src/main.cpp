#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main() {
    std::cout << "=== Teste básico com MutantStack ===" << std::endl;
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Topo atual (top): " << mstack.top() << std::endl;

    mstack.pop(); // Remove o 17

    std::cout << "Tamanho após pop (size): " << mstack.size() << std::endl;

    // mstack.push(3);
    // mstack.push(5);
    // mstack.push(737);
    // mstack.push(0);

    // // O grande teste: Iterar sobre a stack como se fosse um vector ou list!
    // std::cout << "\nElementos na MutantStack (do inicio ao fim):" << std::endl;
    // MutantStack<int>::iterator it = mstack.begin();
    // MutantStack<int>::iterator ite = mstack.end();

    // while (it != ite) {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }

    // std::cout << "\n=== Teste de compatibilidade com std::stack original ===" << std::endl;
    // // Copiar para um std::stack normal para provar que se comporta exatamente igual
    // std::stack<int> s(mstack);
    // std::cout << "Topo da stack copiada: " << s.top() << std::endl;

    return 0;
}