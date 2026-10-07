// roc 2012-06 004a0020  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a0020
//
// 004a0020  b88403b600           mov eax, 0xb60384
// 004a0025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a0020()
{
    return &G;
}
