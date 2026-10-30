#include "force_verified.h"
#include <cstdio>
#pragma comment(lib, "msvcprt.lib")
extern "C" int native_subentity_accessors_smoke();
extern "C" int native_ogre_containers_smoke();
int main() {
    int fields=native_subentity_accessors_smoke();
    if (fields) return fields;
    int containers=native_ogre_containers_smoke();
    std::printf("native Ogre subentity/shadow=%d containers=%d\n",fields,containers);
    return containers ? 100+containers : 0;
}
