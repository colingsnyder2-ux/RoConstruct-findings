// roc 2009-12 008f38f0  unit: CXTWindowMap  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f38f0
//
// 008f38f0  8bc1                 mov eax, ecx
// 008f38f2  33c9                 xor ecx, ecx
// 008f38f4  c7003cfaa000         mov dword ptr [eax], 0xa0fa3c
// 008f38fa  89480c               mov dword ptr [eax + 0xc], ecx
// 008f38fd  894808               mov dword ptr [eax + 8], ecx
// 008f3900  894804               mov dword ptr [eax + 4], ecx
// 008f3903  c3                   ret 
// copied from an identical function in another client (function ??0S_func_00818c20@ns_ROCX0000b8@@QAE@XZ)

namespace ns_ROCX0000b8 {
extern char G;

extern char G;
struct S_func_00818c20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    S_func_00818c20();
};
S_func_00818c20::S_func_00818c20()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = 0;
}
}
