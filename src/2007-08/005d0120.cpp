// roc 2007-08 005d0120  unit: RBX::LocalBackpackItem  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005d0120
//
// 005d0120  e98bfbffff           jmp 0x5cfcb0
// auto-matched from its assembly shape

extern void G1_func_005d0120();
void func_005d0120()
{
    G1_func_005d0120();
}
