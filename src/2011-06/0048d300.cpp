// roc 2011-06 0048d300  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d300
//
// 0048d300  b8c43da700           mov eax, 0xa73dc4
// 0048d305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048d300()
{
    return &G;
}
