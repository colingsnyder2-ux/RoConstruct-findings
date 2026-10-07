// roc 2007-08 00593cc0  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593cc0
//
// 00593cc0  e9abf5ffff           jmp 0x593270
// auto-matched from its assembly shape

extern void G1_func_00593cc0();
void func_00593cc0()
{
    G1_func_00593cc0();
}
