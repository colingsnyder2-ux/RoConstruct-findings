// roc 2008-06 006aaee0  unit: CXTPControlAction  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aaee0
//
// 006aaee0  b888168500           mov eax, 0x851688
// 006aaee5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006aaee0()
{
    return &G;
}
