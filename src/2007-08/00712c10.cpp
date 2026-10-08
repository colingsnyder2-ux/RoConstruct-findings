// roc 2007-08 00712c10  unit: CXTShadowHook  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00712c10
//
// 00712c10  e98bffffff           jmp 0x712ba0
// auto-matched from its assembly shape

extern void G1_func_00712c10();
void func_00712c10()
{
    G1_func_00712c10();
}
