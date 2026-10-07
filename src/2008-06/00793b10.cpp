// roc 2008-06 00793b10  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793b10
//
// 00793b10  b894b68600           mov eax, 0x86b694
// 00793b15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00793b10()
{
    return &G;
}
