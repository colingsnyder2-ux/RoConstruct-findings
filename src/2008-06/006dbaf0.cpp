// roc 2008-06 006dbaf0  unit: CXTTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dbaf0
//
// 006dbaf0  b8d04e8500           mov eax, 0x854ed0
// 006dbaf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006dbaf0()
{
    return &G;
}
