// roc 2007-08 00715ae0  unit: CXTCaptionPopupWnd  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00715ae0
//
// 00715ae0  b84cf07d00           mov eax, 0x7df04c
// 00715ae5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00715ae0()
{
    return &G;
}
