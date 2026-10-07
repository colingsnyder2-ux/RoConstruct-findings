// roc 2011-06 008fe660  unit: CXTPRibbonControlSystemButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe660
//
// 008fe660  b814b2c900           mov eax, 0xc9b214
// 008fe665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fe660()
{
    return &G;
}
