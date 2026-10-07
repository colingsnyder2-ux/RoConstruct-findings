// roc 2010-06 0046d2e0  unit: Scintilla::CScintillaCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046d2e0
//
// 0046d2e0  b81003a100           mov eax, 0xa10310
// 0046d2e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046d2e0()
{
    return &G;
}
