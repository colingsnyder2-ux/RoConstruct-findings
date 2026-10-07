// roc 2011-06 0081af00  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081af00
//
// 0081af00  b8202aac00           mov eax, 0xac2a20
// 0081af05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0081af00()
{
    return &G;
}
