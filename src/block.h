#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
#include <string>

class Block
{
private:
    /* data */
    int index_;
    std::string transaction_;
    //timestamp;  
    //int hash;
    //int previous_hash;
    //int nounce;

public:
    Block(int index, std::string transaction);
    ~Block();
};

#endif