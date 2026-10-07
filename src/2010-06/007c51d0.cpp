// roc 2010-06 007c51d0  unit: CXTPToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c51d0
//
// 007c51d0  b8d465be00           mov eax, 0xbe65d4
// 007c51d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007c51d0()
{
    return &G;
}
