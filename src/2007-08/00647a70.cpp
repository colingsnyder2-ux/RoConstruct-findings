// roc 2007-08 00647a70  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647a70
//
// 00647a70  b878697c00           mov eax, 0x7c6978
// 00647a75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00647a70()
{
    return &G;
}
