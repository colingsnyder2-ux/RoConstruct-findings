// roc 2011-06 00875dc0  unit: CXTPPropertyGridView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875dc0
//
// 00875dc0  b8f8d4ac00           mov eax, 0xacd4f8
// 00875dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00875dc0()
{
    return &G;
}
