#pragma once

#include <cstdint>

class BaseByteArray
{
    public:
        BaseByteArray(const std::uint64_t& size);
        ~BaseByteArray();
    private:
        std::uint64_t _max_size;
};