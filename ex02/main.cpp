#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> ms;

    ms.push(1);
    ms.push(2);
    ms.push(3);
    
    std::cout << "ms content: \n";
    for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it) //it
        std::cout << *it << std::endl;

    MutantStack<int> mscpy = ms; //cpy ctor

    std::cout << "mscpy: removing " << mscpy.top() << std::endl; // stack utils
    mscpy.pop();

    std::cout << "mscpy: size " << mscpy.size() << std::endl;

    std::cout << "ms content: \n";
    for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it) // unaffected
        std::cout << *it << std::endl;
}