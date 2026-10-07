// roc 2011-06 00426990  unit: CRobloxTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00426990
//
// 00426990  b8f44ca600           mov eax, 0xa64cf4
// 00426995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00426990()
{
    return &G;
}
