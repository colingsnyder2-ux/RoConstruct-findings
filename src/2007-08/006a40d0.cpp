// roc 2007-08 006a40d0  unit: CXTPMouseManager  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a40d0
//
// 006a40d0  b8e8357d00           mov eax, 0x7d35e8
// 006a40d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a40d0()
{
    return &G;
}
