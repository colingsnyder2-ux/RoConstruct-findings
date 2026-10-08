// roc 2008-06 0045aca0  unit: G3D::Hashable  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045aca0
//
// 0045aca0  8bc1                 mov eax, ecx
// 0045aca2  33c9                 xor ecx, ecx
// 0045aca4  c7005c978100         mov dword ptr [eax], 0x81975c
// 0045acaa  894810               mov dword ptr [eax + 0x10], ecx
// 0045acad  89480c               mov dword ptr [eax + 0xc], ecx
// 0045acb0  894808               mov dword ptr [eax + 8], ecx
// 0045acb3  894804               mov dword ptr [eax + 4], ecx
// 0045acb6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0045aca0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0045aca0();
};
S_func_0045aca0::S_func_0045aca0()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = z3 = 0;
}
