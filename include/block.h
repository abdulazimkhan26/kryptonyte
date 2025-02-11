#ifndef BLOCK_H
#define BLOCK_H

#include <sstream>
#include<ctime>
#include<iostream>
#include<openssl/sha.h>
using std::string;

class Block{
public:
    int index;
    string previousHash;
    string chash;
    string blockData;
    time_t timestamp;

    Block(int idx, string prevHash, string data);
    string calculateHash() const;
};

#endif