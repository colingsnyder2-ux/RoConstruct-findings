// roc 2007-08 00455410  unit: RBX::NullController  size: 3 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00455410
//
// 00455410  33c0                 xor eax, eax
// 00455412  c3                   ret 
// auto-matched from its assembly shape

int func_00455410()
{
    return 0;
}
