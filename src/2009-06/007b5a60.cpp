// roc 2009-06 007b5a60  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b5a60
//
// 007b5a60  b8c484a200           mov eax, 0xa284c4
// 007b5a65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b5a60()
{
    return &G;
}
