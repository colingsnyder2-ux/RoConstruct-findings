// roc 2007-08 00684df0  unit: CXTPPropExchange  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00684df0
//
// 00684df0  b8c4f37c00           mov eax, 0x7cf3c4
// 00684df5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00684df0()
{
    return &G;
}
