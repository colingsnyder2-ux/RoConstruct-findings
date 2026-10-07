// roc 2010-06 0046e6e0  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e6e0
//
// 0046e6e0  b8a804a100           mov eax, 0xa104a8
// 0046e6e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046e6e0()
{
    return &G;
}
