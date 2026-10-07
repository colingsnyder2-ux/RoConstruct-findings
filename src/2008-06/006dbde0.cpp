// roc 2008-06 006dbde0  unit: CXTTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbde0
//
// 006dbde0  b89c5b8500           mov eax, 0x855b9c
// 006dbde5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006dbde0()
{
    return &G;
}
