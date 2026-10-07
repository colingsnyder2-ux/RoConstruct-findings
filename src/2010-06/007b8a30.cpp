// roc 2010-06 007b8a30  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8a30
//
// 007b8a30  b8c06da500           mov eax, 0xa56dc0
// 007b8a35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b8a30()
{
    return &G;
}
