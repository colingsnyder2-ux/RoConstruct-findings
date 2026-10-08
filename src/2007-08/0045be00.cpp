// roc 2007-08 0045be00  unit: Scintilla::CScintillaCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045be00
//
// 0045be00  b810407900           mov eax, 0x794010
// 0045be05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0045be00()
{
    return &G;
}
