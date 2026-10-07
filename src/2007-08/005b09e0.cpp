// roc 2007-08 005b09e0  unit: RBX::AutoJoint  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005b09e0
//
// 005b09e0  e9dbfbffff           jmp 0x5b05c0
// auto-matched from its assembly shape

extern void G1_func_005b09e0();
void func_005b09e0()
{
    G1_func_005b09e0();
}
