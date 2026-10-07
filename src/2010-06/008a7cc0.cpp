// roc 2010-06 008a7cc0  unit: CXTMemDC  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7cc0
//
// 008a7cc0  b8643da700           mov eax, 0xa73d64
// 008a7cc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a7cc0()
{
    return &G;
}
