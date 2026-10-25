// from server: 100% by auto
// roc 2008-06 007874c0  unit: CXTColorHex  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007874c0
//
// 007874c0  b8b8998600           mov eax, 0x8699b8
// 007874c5  c3                   ret 

extern char G;

char* func_007874c0()
{
    return &G;
}
