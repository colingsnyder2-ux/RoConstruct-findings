// roc 2010-06 008045a0  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008045a0
//
// 008045a0  b8c805a600           mov eax, 0xa605c8
// 008045a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008045a0()
{
    return &G;
}
