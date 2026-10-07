// roc 2007-08 00593df0  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593df0
//
// 00593df0  e9cbfcffff           jmp 0x593ac0
// auto-matched from its assembly shape

extern void G1_func_00593df0();
void func_00593df0()
{
    G1_func_00593df0();
}
