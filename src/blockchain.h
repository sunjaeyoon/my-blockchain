#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#include <vector>
#include "block.h"

class Blockchain
{
private:
    /* data */
    std::vector<Block> Blocks;
    
public:
    Blockchain(/* args */);
    ~Blockchain();
};

#endif