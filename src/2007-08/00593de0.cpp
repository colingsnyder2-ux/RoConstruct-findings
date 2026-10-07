// roc 2007-08 00593de0  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593de0
//
// 00593de0  e96bfcffff           jmp 0x593a50
// auto-matched from its assembly shape

extern void G1_func_00593de0();
void func_00593de0()
{
    G1_func_00593de0();
}
