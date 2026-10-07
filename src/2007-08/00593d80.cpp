// roc 2007-08 00593d80  unit: RBX::VVisit::?$BoundFuncDesc  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00593d80
//
// 00593d80  e92bfaffff           jmp 0x5937b0
// auto-matched from its assembly shape

extern void G1_func_00593d80();
void func_00593d80()
{
    G1_func_00593d80();
}
