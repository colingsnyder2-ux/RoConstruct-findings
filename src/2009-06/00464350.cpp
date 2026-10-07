// roc 2009-06 00464350  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464350
//
// 00464350  b814b88b00           mov eax, 0x8bb814
// 00464355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00464350()
{
    return &G;
}
