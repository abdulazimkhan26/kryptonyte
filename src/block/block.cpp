#include "block.h"

Block::Block(int idx, string prevHash, string data){
    index = idx;
    previousHash = prevHash;
    blockData = data;
    timestamp = time_t(nullptr);
    chash = calculateHash();
}

string Block::calculateHash() const {
    std::stringstream ss;
    ss << index << previousHash << blockData << timestamp;  

    unsigned char chash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)ss.str().c_str(), ss.str().size(), chash);

    std::stringstream hashString;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        hashString << std::hex << (int)(unsigned char)chash[i];  
    }
    return hashString.str();
}
