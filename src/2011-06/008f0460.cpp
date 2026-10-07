// roc 2011-06 008f0460  unit: CXTShadowHook  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0460
//
// 008f0460  e91bffffff           jmp 0x8f0380
// auto-matched from its assembly shape

extern void G1_func_008f0460();
void func_008f0460()
{
    G1_func_008f0460();
}
