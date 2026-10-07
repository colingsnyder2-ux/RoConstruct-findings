// roc 2011-06 008ec020  unit: CXTColorPageCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec020
//
// 008ec020  b81498ad00           mov eax, 0xad9814
// 008ec025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008ec020()
{
    return &G;
}
