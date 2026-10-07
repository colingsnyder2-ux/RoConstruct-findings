// roc 2011-06 00489bb0  unit: Scintilla::CScintillaCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489bb0
//
// 00489bb0  b8a036a700           mov eax, 0xa736a0
// 00489bb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00489bb0()
{
    return &G;
}
