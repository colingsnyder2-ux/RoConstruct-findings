#include "force_verified.h"
#pragma comment(lib, "msvcprt.lib")
extern "C" int native_ownership_smoke();
int main() { return native_ownership_smoke(); }
