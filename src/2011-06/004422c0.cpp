// roc 2011-06 004422c0  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004422c0
//
// 004422c0  b8b48fa600           mov eax, 0xa68fb4
// 004422c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004422c0()
{
    return &G;
}
