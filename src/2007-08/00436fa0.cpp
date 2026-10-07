// roc 2007-08 00436fa0  unit: CClassTreeView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00436fa0
//
// 00436fa0  b8b0cc7800           mov eax, 0x78ccb0
// 00436fa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00436fa0()
{
    return &G;
}
