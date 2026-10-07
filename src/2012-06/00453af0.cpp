// roc 2012-06 00453af0  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00453af0
//
// 00453af0  b80c39b500           mov eax, 0xb5390c
// 00453af5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00453af0()
{
    return &G;
}
