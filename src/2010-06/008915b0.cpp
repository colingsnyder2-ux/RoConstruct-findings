// roc 2010-06 008915b0  unit: CXTColorPageStandard  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008915b0
//
// 008915b0  b81cf5a600           mov eax, 0xa6f51c
// 008915b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008915b0()
{
    return &G;
}
