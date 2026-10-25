// from server: 100% by auto
// roc 2008-06 006a41d0  unit: CXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a41d0
//
// 006a41d0  b8ec058500           mov eax, 0x8505ec
// 006a41d5  c3                   ret 

extern char G;

char* func_006a41d0()
{
    return &G;
}
