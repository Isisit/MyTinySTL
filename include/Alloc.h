#pragma once

#include <cstdlib>

namespace MyTinySTL{

    class alloc{
        private:
            enum EAlign {ALIGN = 8}; //小型区块的上调边界
            enum EMaxBytes{ MAXBYTES = 128};//小型区块的上限，超过的区块由malloc分配
            enum ENFreeLists{ NFREELISTS = (EMaxBytes::MAXBYTES/EAlign::ALIGN)};//free-lists的个数
            enum ENobjs{ NOBJS= 20};//每次增加的节点数
    };
}