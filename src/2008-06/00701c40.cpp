// roc 2008-06 00701c40  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701c40
//
// 00701c40  8bc1                 mov eax, ecx
// 00701c42  33c9                 xor ecx, ecx
// 00701c44  c7001cb78500         mov dword ptr [eax], 0x85b71c
// 00701c4a  894804               mov dword ptr [eax + 4], ecx
// 00701c4d  894810               mov dword ptr [eax + 0x10], ecx
// 00701c50  89480c               mov dword ptr [eax + 0xc], ecx
// 00701c53  894808               mov dword ptr [eax + 8], ecx
// 00701c56  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00701c40
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00701c40();
};
S_func_00701c40::S_func_00701c40()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
