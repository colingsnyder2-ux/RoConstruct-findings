// roc 2007-08 00602ca0  unit: RBX::FallingDown  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00602ca0
//
// 00602ca0  e98bffffff           jmp 0x602c30
// auto-matched from its assembly shape

extern void G1_func_00602ca0();
void func_00602ca0()
{
    G1_func_00602ca0();
}
