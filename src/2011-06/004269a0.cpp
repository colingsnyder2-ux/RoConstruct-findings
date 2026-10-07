// roc 2011-06 004269a0  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004269a0
//
// 004269a0  b8104da600           mov eax, 0xa64d10
// 004269a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004269a0()
{
    return &G;
}
