#include "AsciiMap.hpp"
#include <iostream>

AsciiMap::AsciiMap(int width, int height)
{
    this->_width  = width;
    this->_height = height;
    map.resize(width * height, ' ');
}

unsigned int AsciiMap::width()
{
    return _width;
}

unsigned int AsciiMap::height()
{
    return _height;
}

void AsciiMap::set_cell(int x, int y, char element)
{
    int data{0};

    data      = x + (y * _width);
    map[data] = element;
}

char AsciiMap::get_cell(int x, int y)
{
    int data{0};

    data = x + (y * _width);
    return map[data];
}

void AsciiMap::to_stream(std::ostream &out)
{
    unsigned int i{0};
    auto         iter{map.begin()};

    while (iter != map.end()) {
        if (i == width()) {
            out << '\n';
            i = 0;
        }
        out << *iter;
        iter += 1;
        i += 1;
    }
    std::cout << std::endl;
}
