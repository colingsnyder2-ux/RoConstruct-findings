// roc 2008-06 004636d0  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004636d0
//
// 004636d0  b854ae8100           mov eax, 0x81ae54
// 004636d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004636d0()
{
    return &G;
}
