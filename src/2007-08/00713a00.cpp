// roc 2007-08 00713a00  unit: PAVCXTShadowWnd::?$CList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713a00
//
// 00713a00  b840e97d00           mov eax, 0x7de940
// 00713a05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00713a00()
{
    return &G;
}
