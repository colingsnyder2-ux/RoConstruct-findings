// roc 2012-06 0049c8e0  unit: Scintilla::CScintillaCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049c8e0
//
// 0049c8e0  b860fcb500           mov eax, 0xb5fc60
// 0049c8e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0049c8e0()
{
    return &G;
}
