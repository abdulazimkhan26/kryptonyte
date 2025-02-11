#include "blockchain.h"

int main(){
    Blockchain blkchn;
    blkchn.addBlock("162290078208");
    blkchn.addBlock("7630042042");
    blkchn.printchain();
    return 0;
}