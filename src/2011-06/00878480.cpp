// roc 2011-06 00878480  unit: CXTPPropertyGridToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878480
//
// 00878480  b8f0d9ac00           mov eax, 0xacd9f0
// 00878485  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00878480()
{
    return &G;
}
