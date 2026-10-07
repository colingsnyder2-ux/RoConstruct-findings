// roc 2008-06 004272f0  unit: CRobloxTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004272f0
//
// 004272f0  b884008100           mov eax, 0x810084
// 004272f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004272f0()
{
    return &G;
}
