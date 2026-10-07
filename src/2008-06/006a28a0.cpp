// roc 2008-06 006a28a0  unit: CXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a28a0
//
// 006a28a0  b860028500           mov eax, 0x850260
// 006a28a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a28a0()
{
    return &G;
}
