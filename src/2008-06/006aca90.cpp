// roc 2008-06 006aca90  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aca90
//
// 006aca90  8bc1                 mov eax, ecx
// 006aca92  33c9                 xor ecx, ecx
// 006aca94  c700b4168500         mov dword ptr [eax], 0x8516b4
// 006aca9a  894804               mov dword ptr [eax + 4], ecx
// 006aca9d  894810               mov dword ptr [eax + 0x10], ecx
// 006acaa0  89480c               mov dword ptr [eax + 0xc], ecx
// 006acaa3  894808               mov dword ptr [eax + 8], ecx
// 006acaa6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006aca90
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006aca90();
};
S_func_006aca90::S_func_006aca90()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
