// roc 2008-06 007140f0  unit: CXTPPropertyGridView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007140f0
//
// 007140f0  b850da8500           mov eax, 0x85da50
// 007140f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007140f0()
{
    return &G;
}
