#include "blockchain.h"

Blockchain::Blockchain(/* args */)
{
}

Blockchain::~Blockchain()
{
}

void Blockchain::genesis_block(){
    Blocks.push_back(Block(0, "first block"));
}
