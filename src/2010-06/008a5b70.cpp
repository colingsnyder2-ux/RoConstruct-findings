// roc 2010-06 008a5b70  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5b70
//
// 008a5b70  b810bdbe00           mov eax, 0xbebd10
// 008a5b75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5b70()
{
    return &G;
}
