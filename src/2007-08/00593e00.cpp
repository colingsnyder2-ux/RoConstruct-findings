// roc 2007-08 00593e00  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593e00
//
// 00593e00  e92bfdffff           jmp 0x593b30
// auto-matched from its assembly shape

extern void G1_func_00593e00();
void func_00593e00()
{
    G1_func_00593e00();
}
