#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "block.h"

class Blockchain{
public:
      Blockchain();
      void addBlock(std::string data);
      void printchain();
private:
      std::vector<Block> chain;
      Block createGenesisBlock();
};
#endif