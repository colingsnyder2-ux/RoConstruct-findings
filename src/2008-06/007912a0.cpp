// roc 2008-06 007912a0  unit: PAVCXTShadowWnd::?$CList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007912a0
//
// 007912a0  b8f8ad8600           mov eax, 0x86adf8
// 007912a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007912a0()
{
    return &G;
}
