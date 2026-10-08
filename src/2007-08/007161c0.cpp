// roc 2007-08 007161c0  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007161c0
//
// 007161c0  b8ccf17d00           mov eax, 0x7df1cc
// 007161c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007161c0()
{
    return &G;
}
