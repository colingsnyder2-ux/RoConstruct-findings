// roc 2009-06 00460c40  unit: Scintilla::CScintillaCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460c40
//
// 00460c40  b8f0b08b00           mov eax, 0x8bb0f0
// 00460c45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00460c40()
{
    return &G;
}
