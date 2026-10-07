// roc 2007-08 005563b0  unit: RBX::UnifiedWidget  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005563b0
//
// 005563b0  b80a000000           mov eax, 0xa
// 005563b5  c3                   ret 
// auto-matched from its assembly shape

unsigned int func_005563b0()
{
    return 0xau;
}
