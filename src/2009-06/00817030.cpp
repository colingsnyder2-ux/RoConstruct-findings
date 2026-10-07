// roc 2009-06 00817030  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817030
//
// 00817030  b804eb9000           mov eax, 0x90eb04
// 00817035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00817030()
{
    return &G;
}
