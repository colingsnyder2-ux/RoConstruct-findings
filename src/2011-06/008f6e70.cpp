// roc 2011-06 008f6e70  unit: CXTPRibbonGroupControlPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6e70
//
// 008f6e70  b88caec900           mov eax, 0xc9ae8c
// 008f6e75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f6e70()
{
    return &G;
}
