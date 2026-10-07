// roc 2011-06 008815e0  unit: CXTPControlGallery  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008815e0
//
// 008815e0  b8f884c900           mov eax, 0xc984f8
// 008815e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008815e0()
{
    return &G;
}
