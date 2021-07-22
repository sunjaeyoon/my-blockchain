#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
#include <string>

class Block
{
private:
    /* data */
    int index;
    std::string transaction;
    int timestamp;  
    int hash;
    int nounce;

public:
    Block(/* args */);
    ~Block();
};

#endif