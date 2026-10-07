// roc 2008-06 0079b930  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079b930
//
// 0079b930  b824da8600           mov eax, 0x86da24
// 0079b935  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0079b930()
{
    return &G;
}
