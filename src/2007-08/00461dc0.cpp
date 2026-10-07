// roc 2007-08 00461dc0  unit: CSelectionCaption  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00461dc0
//
// 00461dc0  b8b0527900           mov eax, 0x7952b0
// 00461dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00461dc0()
{
    return &G;
}
