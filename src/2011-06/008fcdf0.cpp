// roc 2011-06 008fcdf0  unit: CXTPRibbonGroupPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fcdf0
//
// 008fcdf0  b8b0c3ad00           mov eax, 0xadc3b0
// 008fcdf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fcdf0()
{
    return &G;
}
