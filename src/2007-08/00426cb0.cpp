// roc 2007-08 00426cb0  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00426cb0
//
// 00426cb0  b8509a7800           mov eax, 0x789a50
// 00426cb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00426cb0()
{
    return &G;
}
