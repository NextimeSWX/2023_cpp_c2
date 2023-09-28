#ifndef ASCII_MAP_HPP_
#define ASCII_MAP_HPP_
#include <ostream>
#include <vector>

class AsciiMap {
public:
    AsciiMap(int width, int height);
    void         set_cell(int x, int y, char element);
    char         get_cell(int x, int y);
    unsigned int width();
    unsigned int height();
    void         to_stream(std::ostream &out);

private:
    char              element;
    unsigned int      _height;
    unsigned int      _width;
    std::vector<char> map;
};

#endif