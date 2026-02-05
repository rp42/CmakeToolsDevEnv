#include <iostream>

int main()
{
    std::cout << "Hello World\n";

    std::cout << "Clang compiler version: "
              << __clang_major__ << "."
              << __clang_minor__ << "."
              << __clang_patchlevel__ << "\n";

    std::cout << "Clang full version: " << __clang_version__ << "\n";

    return 0;
}
