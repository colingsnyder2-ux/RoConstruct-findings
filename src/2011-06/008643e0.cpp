// roc 2011-06 008643e0  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008643e0
//
// 008643e0  b800acac00           mov eax, 0xacac00
// 008643e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008643e0()
{
    return &G;
}
