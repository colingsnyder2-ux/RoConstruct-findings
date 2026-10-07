// roc 2008-06 00436080  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436080
//
// 00436080  b87c2f8100           mov eax, 0x812f7c
// 00436085  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00436080()
{
    return &G;
}
