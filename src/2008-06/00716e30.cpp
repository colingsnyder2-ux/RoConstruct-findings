// roc 2008-06 00716e30  unit: CXTPPropertyGridToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716e30
//
// 00716e30  b828de8500           mov eax, 0x85de28
// 00716e35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00716e30()
{
    return &G;
}
