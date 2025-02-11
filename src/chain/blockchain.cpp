#include "blockchain.h"

Blockchain::Blockchain(){
    chain.push_back(createGenesisBlock());
}

Block Blockchain::createGenesisBlock(){
    return Block(0,"0x0","Genesis Block");
}

void Blockchain::addBlock(std::string data){
    Block newblock (chain.size(), chain.back().chash, data);
    chain.push_back(newblock);
}

void Blockchain::printchain(){
    for(const Block &block : chain){
        std::cout<< "Index: " << block.index << std::endl;
        std::cout<< "Timestamp: " << block.timestamp << std::endl;
        std::cout<< "PrevHash: " << block.previousHash << std::endl;
        std::cout<< "Data: " << block.blockData << std::endl;
        std::cout<< "Hash: " << block.chash << std::endl;
        std::cout<< "----------------------------------------------: " << std::endl;
    }
}