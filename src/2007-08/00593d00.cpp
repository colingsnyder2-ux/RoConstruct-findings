// roc 2007-08 00593d00  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593d00
//
// 00593d00  e92bf7ffff           jmp 0x593430
// auto-matched from its assembly shape

extern void G1_func_00593d00();
void func_00593d00()
{
    G1_func_00593d00();
}
