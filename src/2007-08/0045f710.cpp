// roc 2007-08 0045f710  unit: Scintilla::CScintillaView  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f710
//
// 0045f710  b834467900           mov eax, 0x794634
// 0045f715  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045f710()
{
    return &G;
}
