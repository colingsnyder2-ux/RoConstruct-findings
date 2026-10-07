// roc 2008-06 004613c0  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004613c0
//
// 004613c0  b8c8a88100           mov eax, 0x81a8c8
// 004613c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004613c0()
{
    return &G;
}
