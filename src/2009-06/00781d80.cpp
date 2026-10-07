// roc 2009-06 00781d80  unit: CXTPDockingPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781d80
//
// 00781d80  b8f0d18f00           mov eax, 0x8fd1f0
// 00781d85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00781d80()
{
    return &G;
}
