// roc 2007-08 00593d90  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593d90
//
// 00593d90  e98bfaffff           jmp 0x593820
// auto-matched from its assembly shape

extern void G1_func_00593d90();
void func_00593d90()
{
    G1_func_00593d90();
}
