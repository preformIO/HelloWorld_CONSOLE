// HelloWorld.cpp : This file contains the 'main' function. 
// Program execution begins and ends there.
// 
// History:
// 2022.02.26
//  - turned warning levels up to the maximum
//  https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-warning-and-error-levels/
//  - disabled language extensions
//  https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-compiler-extensions/     
// 2022.02.20
//  - Initial setup 
//  https://www.learncpp.com/cpp-tutorial/compiling-your-first-program/
// 
//

#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello World!\n";

    // force appliction to stay running until user presses enter key
    // ---------------------------------------------------------------
    std::cin.clear(); // reset any error flags
    // ignore any characters in the input buffer until we find an 
    // enter character
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin.get(); // get one more char from the user
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, 
//      or Project > Add Existing Item to add existing code files 
//      to the project
//   6. In the future, to open this project again, go to 
//        File > Open > Project and select the .sln file
//
