// roc 2007-08 00664d20  unit: CXTTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664d20
//
// 00664d20  b8a8977c00           mov eax, 0x7c97a8
// 00664d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00664d20()
{
    return &G;
}
