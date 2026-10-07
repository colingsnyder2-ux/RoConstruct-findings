// roc 2010-06 00818db0  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818db0
//
// 00818db0  b82c2ca600           mov eax, 0xa62c2c
// 00818db5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00818db0()
{
    return &G;
}
