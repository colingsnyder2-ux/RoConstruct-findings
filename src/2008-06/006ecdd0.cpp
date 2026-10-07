// roc 2008-06 006ecdd0  unit: CXTPCustomizeOptionsPage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ecdd0
//
// 006ecdd0  b888828500           mov eax, 0x858288
// 006ecdd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ecdd0()
{
    return &G;
}
