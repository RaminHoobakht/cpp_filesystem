#include "../header/utillib.hpp"
#include <filesystem>
#include <iostream>

int main() {


    // const std::filesystem::__cxx11::path cp = std::filesystem::current_path();
    const auto cp = std::filesystem::current_path();
    std::cout << "current path is: " << cp << NL;

    std::cout << "\n #(10:40:55): The End ..." << std::endl;
    return (EXIT_SUCCESS);
}
