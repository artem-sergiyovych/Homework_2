#include <iostream>
#include "Time.hpp"
///Always put class input afrer all additional libraries

int main() {
    Time t1(200);
    std::cout << t1 << std::endl; // displays 00h:03m:20s

    Time t2;
    std::cout << "Enter time in the format hh:mm:ss: ";
    std::cin >> t2;
    std::cout << "inputted time is: " << t2 << std::endl;

    Time t3 = t2 - t1;
    std::cout << t3 << std::endl; // displays the difference between t2 and t1

    int t3s = t3;
    std::cout << t3s << std::endl; // displays the number of seconds in t3

    return 0;
}
