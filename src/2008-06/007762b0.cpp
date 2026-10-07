// roc 2008-06 007762b0  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007762b0
//
// 007762b0  b8148a8600           mov eax, 0x868a14
// 007762b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007762b0()
{
    return &G;
}
