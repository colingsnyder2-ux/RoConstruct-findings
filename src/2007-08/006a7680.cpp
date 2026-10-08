// roc 2007-08 006a7680  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7680
//
// 006a7680  b8547d8b00           mov eax, 0x8b7d54
// 006a7685  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a7680()
{
    return &G;
}
