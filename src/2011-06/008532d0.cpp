// roc 2011-06 008532d0  unit: CXTPPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008532d0
//
// 008532d0  b82070c900           mov eax, 0xc97020
// 008532d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008532d0()
{
    return &G;
}
