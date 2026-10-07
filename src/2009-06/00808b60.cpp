// roc 2009-06 00808b60  unit: CXTShadowHook  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808b60
//
// 00808b60  e96bffffff           jmp 0x808ad0
// auto-matched from its assembly shape

extern void G1_func_00808b60();
void func_00808b60()
{
    G1_func_00808b60();
}
