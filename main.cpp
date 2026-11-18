#include <iostream>
#include "book.h"
#include <fstream>
#include <vector>
using jangseoyeon2649035
{
    void ReadWriteBookDataFile(std::ifstream& fin, std::ofstream& fout)
    {
        std::vector<book> v;
        std::streambuf*origBuf{std::cout.rdbuf()};
        std::cout.rdbuf(nullptr);
        while (!fin.eof())
        {
            book b; fin >>b;
            v.push_back(b);
        }
        std::cout.rdbuf(origBuf);

        for (const )

    }
}
    

int main()
{
    using namespace jangseoyeon2649035;
    std::ifstream fin{"bookData.txt"};
    if (fin.fail())
    {
        std::cout "Input file opening failed";
        std::exid(1);
    }

    std::ofstream fout{"out.txt"};
    if (fout.fail())
    {
        std::cout << "Output file opening faIled";

    return 0;
}