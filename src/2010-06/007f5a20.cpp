// roc 2010-06 007f5a20  unit: CXTPPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f5a20
//
// 007f5a20  b89079be00           mov eax, 0xbe7990
// 007f5a25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f5a20()
{
    return &G;
}
