// roc 2007-08 005588d0  unit: RBX::DataModel  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005588d0
//
// 005588d0  e9ebefffff           jmp 0x5578c0
// auto-matched from its assembly shape

extern void G1_func_005588d0();
void func_005588d0()
{
    G1_func_005588d0();
}
