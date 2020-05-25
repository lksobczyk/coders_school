#include <iostream>

void printString(const std::string& text, size_t count)
{
    for (size_t k = 0; k < count; ++k)
    {
        std::cout << text << " ";
    }
}

int main()
{
    printString("Hello", 5);
    std::cout << "\n";

    printString("AbC", 2);
    std::cout << "\n";

    printString("HiHi ", 6);
    std::cout << "\n";

    return 0;
}

// rybka