// roc 2007-08 00602630  unit: RBX::Running  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00602630
//
// 00602630  e90bffffff           jmp 0x602540
// auto-matched from its assembly shape

extern void G1_func_00602630();
void func_00602630()
{
    G1_func_00602630();
}
