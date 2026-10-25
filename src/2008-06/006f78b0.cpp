// from server: 100% by auto
// roc 2008-06 006f78b0  unit: CXTPPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f78b0
//
// 006f78b0  b800040000           mov eax, 0x400
// 006f78b5  c3                   ret 

unsigned int func_006f78b0()
{
    return 0x400u;
}
