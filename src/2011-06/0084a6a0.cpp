// roc 2011-06 0084a6a0  unit: CXTTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a6a0
//
// 0084a6a0  b89465ac00           mov eax, 0xac6594
// 0084a6a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0084a6a0()
{
    return &G;
}
