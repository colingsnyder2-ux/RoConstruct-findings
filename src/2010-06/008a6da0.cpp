// roc 2010-06 008a6da0  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a6da0
//
// 008a6da0  b8643ba700           mov eax, 0xa73b64
// 008a6da5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a6da0()
{
    return &G;
}
