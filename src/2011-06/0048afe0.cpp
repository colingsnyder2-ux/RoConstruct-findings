// roc 2011-06 0048afe0  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048afe0
//
// 0048afe0  b83838a700           mov eax, 0xa73838
// 0048afe5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048afe0()
{
    return &G;
}
