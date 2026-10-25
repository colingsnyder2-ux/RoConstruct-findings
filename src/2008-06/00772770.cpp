// from server: 100% by auto
// roc 2008-06 00772770  unit: CXTPCustomizeToolbarsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772770
//
// 00772770  b854838600           mov eax, 0x868354
// 00772775  c3                   ret 

extern char G;

char* func_00772770()
{
    return &G;
}
