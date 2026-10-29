#include "force_verified.h"
#include <cstdio>
#pragma comment(lib, "msvcprt.lib")
extern "C" int native_subentity_accessors_smoke();
int main() { int result=native_subentity_accessors_smoke(); std::printf("native Ogre subentity fields result=%d\n",result); return result; }
