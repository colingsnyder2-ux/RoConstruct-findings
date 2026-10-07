// roc 2011-06 008f6bb0  unit: CXTPRibbonGroup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6bb0
//
// 008f6bb0  b870aec900           mov eax, 0xc9ae70
// 008f6bb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008f6bb0()
{
    return &G;
}
