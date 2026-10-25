// from server: 100% by auto
// roc 2008-06 00797bb0  unit: CXTPRibbonGroup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797bb0
//
// 00797bb0  b804b89600           mov eax, 0x96b804
// 00797bb5  c3                   ret 

extern char G;

char* func_00797bb0()
{
    return &G;
}
