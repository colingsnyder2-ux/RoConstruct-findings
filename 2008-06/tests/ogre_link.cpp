#include "force_verified.h"
#include <cstdio>
#pragma comment(lib, "msvcprt.lib")
extern "C" int native_subentity_accessors_smoke();
extern "C" int native_ogre_containers_smoke();
extern "C" int native_ogre_scene_lifecycle();
int main() {
    int fields=native_subentity_accessors_smoke();
    if (fields) return fields;
    int containers=native_ogre_containers_smoke();
    std::printf("native Ogre subentity/shadow=%d containers=%d\n",fields,containers);
    if (containers) return 100+containers;
    int scene=native_ogre_scene_lifecycle();
    std::printf("native Ogre scene lifecycle=%d\n",scene);
    return scene ? 200+scene : 0;
}
