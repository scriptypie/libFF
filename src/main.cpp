#include <iostream>
#include <string>
#include <fstream>

#include "ff/libFF.hpp"

int main()
{
    std::string text = 
        "Welcome to your personal dashboard, \n"
        "where you can find an introduction to how GitHub works, \n"
        "tools to help you build software, and help merging your first lines of code."
    ;
    {
        ffGenericWriter writer;
        writer.write("test1.txt", text.c_str(), text.size());
    }
    {
        ffGenericReader reader;
        ffGenericHeader header = reader.view("test1.txt");
        std::cout << "File: test1.txt" << std::endl;
        std::cout << header << std::endl;

        if (reader.compatible())
        {
            std::cout << "Data:" << std::endl;
            std::cout << reader.read() << std::endl;
        }
    }
    return 0;
}
