#include "block.h"

Block::Block(int index, std::string transaction){
    this->index_ = index;
    this->transaction_ = transaction;

}

Block::~Block(){

}
