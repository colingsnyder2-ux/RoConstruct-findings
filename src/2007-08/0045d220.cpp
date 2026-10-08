// roc 2007-08 0045d220  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d220
//
// 0045d220  b8a0417900           mov eax, 0x7941a0
// 0045d225  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045d220()
{
    return &G;
}
