#include <iostream>

int max(int first, int second, int third)
{
    return (first > second) ?
        ((first > third) ? first : third) :
        ((second > third) ? second : third);    
}

int main()
{
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}
