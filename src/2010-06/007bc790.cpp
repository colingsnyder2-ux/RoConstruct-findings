// roc 2010-06 007bc790  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bc790
//
// 007bc790  b8e870a500           mov eax, 0xa570e8
// 007bc795  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007bc790()
{
    return &G;
}
