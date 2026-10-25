// from server: 100% by auto
// roc 2008-06 0045afd0  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045afd0
//
// 0045afd0  b830978100           mov eax, 0x819730
// 0045afd5  c3                   ret 

extern char G;

char* func_0045afd0()
{
    return &G;
}
