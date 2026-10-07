// roc 2008-06 0071aa50  unit: CXTPDockBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071aa50
//
// 0071aa50  8bc1                 mov eax, ecx
// 0071aa52  33c9                 xor ecx, ecx
// 0071aa54  c7008cf18500         mov dword ptr [eax], 0x85f18c
// 0071aa5a  894804               mov dword ptr [eax + 4], ecx
// 0071aa5d  894810               mov dword ptr [eax + 0x10], ecx
// 0071aa60  89480c               mov dword ptr [eax + 0xc], ecx
// 0071aa63  894808               mov dword ptr [eax + 8], ecx
// 0071aa66  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0071aa50
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0071aa50();
};
S_func_0071aa50::S_func_0071aa50()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
