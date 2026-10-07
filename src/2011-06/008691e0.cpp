// roc 2011-06 008691e0  unit: CXTPPropertyGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008691e0
//
// 008691e0  b8ecb6ac00           mov eax, 0xacb6ec
// 008691e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008691e0()
{
    return &G;
}
