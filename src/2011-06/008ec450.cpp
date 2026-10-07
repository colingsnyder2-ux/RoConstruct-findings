// roc 2011-06 008ec450  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec450
//
// 008ec450  b8b099ad00           mov eax, 0xad99b0
// 008ec455  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008ec450()
{
    return &G;
}
