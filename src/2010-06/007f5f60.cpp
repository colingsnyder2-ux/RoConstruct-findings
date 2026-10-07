// roc 2010-06 007f5f60  unit: CXTPPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f5f60
//
// 007f5f60  b8ac79be00           mov eax, 0xbe79ac
// 007f5f65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f5f60()
{
    return &G;
}
