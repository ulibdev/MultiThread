#include <SFML/System.hpp>
#include <iostream>

void stringOne()
{
    for (int i = 0; i < 5; ++i)
        std::cout << "I'm thread number one" << std::endl;
}
void stringTwo()
{
    for (int i = 0; i < 5; ++i)
        std::cout << "I'm thread number Two" << std::endl;
}
void stringThree()
{
    for (int i = 0; i < 5; ++i)
        std::cout << "I'm thread number Three" << std::endl;
}

int main()
{
    
    sf::Thread thread1(&stringOne);
    sf::Thread thread2(&stringTwo);
    sf::Thread thread3(&stringThree);

    thread1.launch();
    thread2.launch();
    thread3.launch();

    return 0;
}