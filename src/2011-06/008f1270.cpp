// roc 2011-06 008f1270  unit: PAVCXTShadowWnd::?$CList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1270
//
// 008f1270  b8b0a0ad00           mov eax, 0xada0b0
// 008f1275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f1270()
{
    return &G;
}
