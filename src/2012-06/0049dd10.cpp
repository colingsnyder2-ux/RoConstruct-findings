// roc 2012-06 0049dd10  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dd10
//
// 0049dd10  b8f8fdb500           mov eax, 0xb5fdf8
// 0049dd15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0049dd10()
{
    return &G;
}
