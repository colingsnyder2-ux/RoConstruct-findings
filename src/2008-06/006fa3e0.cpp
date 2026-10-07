// roc 2008-06 006fa3e0  unit: CXTPPropertyGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa3e0
//
// 006fa3e0  b888a78500           mov eax, 0x85a788
// 006fa3e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fa3e0()
{
    return &G;
}
