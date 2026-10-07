// roc 2010-06 004708b0  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004708b0
//
// 004708b0  b8340aa100           mov eax, 0xa10a34
// 004708b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004708b0()
{
    return &G;
}
