// roc 2010-06 008818a0  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008818a0
//
// 008818a0  b834e7a600           mov eax, 0xa6e734
// 008818a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008818a0()
{
    return &G;
}
