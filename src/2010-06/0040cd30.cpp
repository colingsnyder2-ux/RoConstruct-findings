// roc 2010-06 0040cd30  unit: CBrowserDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040cd30
//
// 0040cd30  b8fc14a000           mov eax, 0xa014fc
// 0040cd35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cd30()
{
    return &G;
}
