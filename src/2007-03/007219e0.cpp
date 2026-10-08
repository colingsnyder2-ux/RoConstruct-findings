// roc 2007-03 007219e0  unit: seg_00720000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007219e0
//
// 007219e0  8bc1                 mov eax, ecx
// 007219e2  33c9                 xor ecx, ecx
// 007219e4  c700cc3e7e00         mov dword ptr [eax], 0x7e3ecc
// 007219ea  89480c               mov dword ptr [eax + 0xc], ecx
// 007219ed  894808               mov dword ptr [eax + 8], ecx
// 007219f0  894804               mov dword ptr [eax + 4], ecx
// 007219f3  c3                   ret 
// copied from an identical function in another client (function ??0S_func_00720590@ns_ROCX0000e1@@QAE@XZ)

namespace ns_ROCX0000e1 {
extern char G;

extern char G;
struct S_func_00720590
{
    void* p0;
    int z0;
    int z1;
    int z2;
    S_func_00720590();
};
S_func_00720590::S_func_00720590()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = 0;
}
}
