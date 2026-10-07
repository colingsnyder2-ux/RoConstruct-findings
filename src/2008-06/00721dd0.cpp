// roc 2008-06 00721dd0  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721dd0
//
// 00721dd0  b80c8f9600           mov eax, 0x968f0c
// 00721dd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00721dd0()
{
    return &G;
}
