// roc 2007-08 00694a60  unit: CXTPToolTipContext::CRichEditToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694a60
//
// 00694a60  b8100e7d00           mov eax, 0x7d0e10
// 00694a65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00694a60()
{
    return &G;
}
