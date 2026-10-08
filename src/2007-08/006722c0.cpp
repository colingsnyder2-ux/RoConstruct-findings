// roc 2007-08 006722c0  unit: CXTPControlPopupColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006722c0
//
// 006722c0  b8a8678b00           mov eax, 0x8b67a8
// 006722c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006722c0()
{
    return &G;
}
