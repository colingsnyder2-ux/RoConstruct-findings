// roc 2011-06 00901390  unit: CXTMemDC  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901390
//
// 00901390  b8bce1ad00           mov eax, 0xade1bc
// 00901395  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00901390()
{
    return &G;
}
