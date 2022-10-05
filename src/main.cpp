#include <iostream>
#include <string>
#include <fstream>

#include "ff/libFF.hpp"
#include "text.tt"

int main()
{
    {
        ffGenericWriter writer;
        writer.write("test.data", text, ffCompressionAlgorithmLZ4);
    }
    {
        ffGenericReader reader;
        ffGenericHeader header = reader.view("test.data");
        std::cout << "File: test.data" << std::endl;
        std::cout << header << std::endl;

        if (reader.compatible())
        {
            //std::cout << reader.read() << std::endl;
        }
    }
    return 0;
}
