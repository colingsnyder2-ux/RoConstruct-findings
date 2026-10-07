// roc 2008-06 0045ffd0  unit: Scintilla::CScintillaCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ffd0
//
// 0045ffd0  b830a78100           mov eax, 0x81a730
// 0045ffd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045ffd0()
{
    return &G;
}
