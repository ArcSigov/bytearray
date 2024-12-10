
#include "base_bytearray.h"
#include <iostream>

BaseByteArray::BaseByteArray(const std::uint64_t& size) : _max_size(size)
{
    std::cout << "Created=" << _max_size << std::endl;
}

BaseByteArray::~BaseByteArray()
{


}