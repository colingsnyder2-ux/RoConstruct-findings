// roc 2007-08 00593d10  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593d10
//
// 00593d10  e98bf7ffff           jmp 0x5934a0
// auto-matched from its assembly shape

extern void G1_func_00593d10();
void func_00593d10()
{
    G1_func_00593d10();
}
