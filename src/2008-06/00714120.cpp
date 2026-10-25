// from server: 100% by auto
// roc 2008-06 00714120  unit: CXTPPropertyGridView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714120
//
// 00714120  b883000000           mov eax, 0x83
// 00714125  c3                   ret 

unsigned int func_00714120()
{
    return 0x83u;
}
