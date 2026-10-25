// from server: 100% by auto
// roc 2008-06 00789fa0  unit: CXTColorPageStandard  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00789fa0
//
// 00789fa0  b8f49c8600           mov eax, 0x869cf4
// 00789fa5  c3                   ret 

extern char G;

char* func_00789fa0()
{
    return &G;
}
