// roc 2007-08 00593dc0  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593dc0
//
// 00593dc0  e9abfbffff           jmp 0x593970
// auto-matched from its assembly shape

extern void G1_func_00593dc0();
void func_00593dc0()
{
    G1_func_00593dc0();
}
