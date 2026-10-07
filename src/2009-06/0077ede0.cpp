// roc 2009-06 0077ede0  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077ede0
//
// 0077ede0  b878ca8f00           mov eax, 0x8fca78
// 0077ede5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0077ede0()
{
    return &G;
}
