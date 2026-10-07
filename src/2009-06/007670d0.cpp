// roc 2009-06 007670d0  unit: CXTPPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007670d0
//
// 007670d0  b82c69a200           mov eax, 0xa2692c
// 007670d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007670d0()
{
    return &G;
}
