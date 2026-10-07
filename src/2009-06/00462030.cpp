// roc 2009-06 00462030  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462030
//
// 00462030  b888b28b00           mov eax, 0x8bb288
// 00462035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00462030()
{
    return &G;
}
