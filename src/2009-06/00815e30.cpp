// roc 2009-06 00815e30  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00815e30
//
// 00815e30  b8bcaba200           mov eax, 0xa2abbc
// 00815e35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00815e30()
{
    return &G;
}
