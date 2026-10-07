// roc 2010-06 0089e300  unit: CXTPRibbonGroupControlPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e300
//
// 0089e300  b86cb9be00           mov eax, 0xbeb96c
// 0089e305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0089e300()
{
    return &G;
}
