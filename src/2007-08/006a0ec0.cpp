// roc 2007-08 006a0ec0  unit: CXTPDockBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0ec0
//
// 006a0ec0  b864327d00           mov eax, 0x7d3264
// 006a0ec5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a0ec0()
{
    return &G;
}
