// roc 2008-06 00463570  unit: Scintilla::CScintillaFindReplaceDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463570
//
// 00463570  b8a8ac8100           mov eax, 0x81aca8
// 00463575  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00463570()
{
    return &G;
}
