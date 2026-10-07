// roc 2007-08 00593e10  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593e10
//
// 00593e10  e98bfdffff           jmp 0x593ba0
// auto-matched from its assembly shape

extern void G1_func_00593e10();
void func_00593e10()
{
    G1_func_00593e10();
}
